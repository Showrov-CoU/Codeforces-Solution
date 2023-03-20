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

ll digsum(ll n){
    ll s=0;
    while(n){
        s+=n%10;
        n/=10;
    }
    return s;
}

void solve(){
    ll n,ans=0;
    cin>>n;
    while(1){
        ll a=digsum(n);
        if(gcd(n,a)>1){
           ans=n;
           break;
        }
        n++;
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