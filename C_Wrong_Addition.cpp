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
    string a,s,ans="";
    cin>>a>>s;
    bool ok=false;
    int sz=a.length();
    sz--;
    int n=s.length();

    if(a==s){
        cout<<0<<endl;
        return;
    }

    for(int i=n-1;i>=0;i--){
        if(sz<0) ans+=s[i];
        else if(s[i] < a[sz] && sz>=0){
            i--;
            if(i<0){
                ok=true;
                break;
            }
            int x=((s[i]-'0') * 10) + s[i+1]-'0';
            if(x-(a[sz]-'0') > 9){
                ok=true;
                break;
            }
            ans+= x-(a[sz]-'0')+'0';
            sz--;
        }
        else if(s[i] >= a[sz] && sz>=0){
            ans+=(s[i] - a[sz])+'0';
            sz--;
        }
    }
    
    if(ok || sz>=0) cout<<-1<<endl;
    else{
        reverse(ans.begin(),ans.end());
        int v=1;
        for(int i=0;i<ans.length();i++){
            if(ans[i]=='0' && v) continue;
            else{
                v=0;
                cout<<ans[i];
            }
        }
        cout<<endl;
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