#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
//#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;
ll MOD=1e9+7;
void solve(){
   
    ll n,k,ans=1;
    cin>>n>>k;
    for(int i=1;i<=k;i++){
        ans=(n*ans)%MOD;
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