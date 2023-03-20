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
    ll n,ans=0,ev=0,od=0;
    cin>>n;
    ll a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2) od++;
        else ev++;
    }
    cout<<min(ev,od)<<endl;
    // int i=0,j=1;
    // while(j<n){
    //     if((a[i]+a[j])%2==0){
    //         i+=2;
    //         j+=2;
    //     }
    //     else{
    //         ans++;
    //         i+=3;
    //         j+=3;
    //     }
    // }
    // cout<<ans<<endl;
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