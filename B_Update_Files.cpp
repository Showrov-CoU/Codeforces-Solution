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
    ll n,k;
    cin>>n>>k;
    if(k==1){
        cout<<n-1<<endl;
    }
    if(n==1){
        cout<<0<<endl;
    }
    if(n<=4){
        if(n==2) cout<<1<<endl;
        else cout<<2<<endl;
    }
    else{
        n-=4;
        if(k<=4){
            if(n%k) cout<<2+(n/k)+1<<endl;
            else cout<<2+(n/k)<<endl;
        }
        else{
            ll ans=2;
            ll m=4;
            while(1){
                m*=2;
                ans++;
                if(m>=k) break;
            }
            cout<<ans<<endl;
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