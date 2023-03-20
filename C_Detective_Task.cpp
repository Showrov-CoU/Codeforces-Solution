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

void solve(){
    string s;
    cin>>s;
    int n=s.size();
    if(count(s.begin(),s.end(),'?')==n){
        cout<<n<<endl;
        return;
    }
    if(count(s.begin(),s.end(),'1')==0){
        int ans=0;
        for(int i=0;i<n;i++){
            ans++;
            if(s[i]=='0') break;
        }
        cout<<ans<<endl;
        return;
    }
    int lastzero=-1;
    int ans;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='0') lastzero=i;
        else {
            if(s[i]=='1'){
                if(lastzero==-1){
                    ans=n-i;
                    break;
                }
                else{
                    ans=lastzero-i+1;
                    break;
                }
            }
        }
    }
    cout<<ans<<endl;
    
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