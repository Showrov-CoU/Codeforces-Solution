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
//#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update > pbds;


void solve(){
    ll n;
    cin>>n;
    ll t=n-2;
    vector<string> v(t);
    string ans="";
    for(int i=0;i<t;i++){
        string a;
        cin>>a;
        v[i]=a;
    }
    ans+=v[0];
    ll sz=2;
    for(int i=1;i<t;i++){
        if(sz==n) break;
        if(v[i][0]==v[i-1][1]){
            ans+=v[i][1];
            sz++;
        }
        else{
            ans+=v[i];
            sz+=2;
        }
    }
    if(sz!=n) cout<<ans+'a'<<endl;
    else cout<<ans<<endl;
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