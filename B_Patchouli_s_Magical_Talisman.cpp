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

int solve(){
    ll n,od=0,ev=0,mn=100;
    cin>>n;
    ll a[n+2];
    for(int i=0;i<n;i++){
        cin>>a[i];
        ll x=a[i];
        if(x%2) od++;
        else{
            ev++;
            ll cnt=0;
            while(x%2==0){
                cnt++;
                x/=2;
            }
            mn=min(mn,cnt);
        }
    }
    if(od!=0) cout<<ev<<endl;
    else cout<<mn+(ev-1)<<endl;
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