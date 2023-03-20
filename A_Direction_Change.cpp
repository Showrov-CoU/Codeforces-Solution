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
    ll n,m;
    cin>>n>>m;
    if((n==1 and m>2) || (n>2 and m==1)){
        cout<<-1<<endl;
        return;
    }
    ll x=min(n,m);
    ll ans=((x-1)*2);
    if((n-x)==0){
        if((m-x)%2==0) ans+=((m-x)*2);
        else ans+=((m-x)*2 - 1);
    }
    else if((m-x)==0){
        if((n-x)%2==0) ans+=((n-x)*2);
        else ans+=((n-x)*2 - 1);
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