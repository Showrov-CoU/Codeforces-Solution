#include <bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define yes           cout<<"YES"<<endl
#define no            cout<<"NO"<<endl
#define fix(x)        cout<<fixed<<setprecision(x)
#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update > pbds;

int cnt[26];

int getmore(int x,int k)
{
    return (k-x%k)%k;
}

void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    if(n%k != 0){
        cout<<-1<<endl;
        return;
    }

    for(int i=0;i<26;i++) cnt[i]=0;
    for(auto c:s) cnt[c-'a']++;

    int sum=0;
    for(int i=0;i<26;i++) sum+=getmore(cnt[i],k);

    if(sum==0){
        cout<<s<<endl;
        return;
    }

    for(int i=n-1;i>=0;i--){
        sum-=getmore(cnt[s[i]-'a'], k);
        cnt[s[i]-'a']--;
        sum+=getmore(cnt[s[i]-'a'], k);
        for(int j=s[i]-'a'+1;j<26;j++){
            
            int last_sum=sum;
            sum-=getmore(cnt[j], k);
            cnt[j]++;
            sum+=getmore(cnt[j], k);
            
            if(sum+i+1<=n){
                for(int pos=0;pos<i;pos++) cout<<s[pos];
                cout<<char('a'+j);

                string add="";
                for(int ch=0;ch<26;ch++){
                    int f=getmore(cnt[ch],k);
                    while(f){
                        add+=char('a'+ch);
                        f--;
                    }
                }
                while((int)add.size()+i+1 < n) add+='a';
                sort(add.begin(),add.end());
                cout<<add<<endl;
                return;
            }
            cnt[j]--;
            sum=last_sum;
        }
    }
}

int main() 
{
    FAST
    int t;
    cin>>t;
    while(t--)
    {
        solve();        
    }
    return 0;
}