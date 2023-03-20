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

void solve(){
    ll n,k,i,j;
    cin>>n>>k;
    ll a[n+2];
    for(int i=1;i<=n;i++) cin>>a[i];
    ll ans=LLONG_MIN;
    for(i=max(1LL,n-210);i<=n;i++){
        for(j=i+1;j<=n;j++){
            ans=max(ans,(i*j)-k*(a[i]|a[j]));
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