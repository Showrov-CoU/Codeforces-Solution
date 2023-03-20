#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

ll M=998244353;

ll power(ll a,ll b){
    ll res=1;
    while(b){
        if(b%2) res=(res*a)%M,b--;
        else a=(a*a)%M,b/=2;
    }
    return res;
}

// ll bigmod(ll a,ll b){
//     if(b==0) return 1;
//     if(b%2==0){
//         ll x=bigmod(a,b/2);
//         return ((x%M)*(x%M))%M;
//     }
//     else{
//         ll x=bigmod(a,b-1);
//         return ((x%M)*(a%M))%M;
//     }
// }

void solve(){
    ll n;
    cin>>n;
    ll ar[n+4];
    ar[1]=1;
    ar[2]=1;
    for(ll i=3;i<=n;i++) ar[i]=(ar[i-1]+ar[i-2])%M;
    ll p=ar[n];
    //ll q=bigmod(2,n);
    ll q=power(2,n);
    //cout<<p<<" "<<q<<endl;
    //cout<<(p*bigmod(q,M-2))%M<<endl;
    cout<<(p*power(q,M-2))%M<<endl;
}

int main() 
{
    FAST

        solve();        
    
    return 0;
}