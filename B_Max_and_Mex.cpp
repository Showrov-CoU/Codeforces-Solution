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
    ll n,k,x;
    cin>>n>>k;
    map<ll,ll>mp;

    ll mx=LONG_MIN,me;
    for(int i=0;i<n;i++){
        cin>>x;
        mx=max(mx,x);
        mp[x]++;
    }
    ll ans=mp.size();
    
    for(int i=0;i<=mx+1;i++){
        if(mp[i]==0){
            me=i;
            break;
        }
    }

    if(mx>me && k!=0){
        ll av=(mx+me+1)/2;
        if(mp[av]==0) ans++;
        cout<<ans<<endl;
    }
    else cout<<ans+k<<endl;
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