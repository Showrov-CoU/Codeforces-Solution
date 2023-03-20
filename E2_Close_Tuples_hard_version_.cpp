#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

ll mx=5e5+5;
ll mod=1e9+7;
ll ar[500005];

void f(){
    ar[0]=1;
    for(int i=1;i<mx;i++){
        ar[i]=(i*ar[i-1])%mod;
    }
}

ll bigmod(ll a, ll b)
{
    if(b==0)return 1;
    if(b%2==0)
    {
        ll x=bigmod(a,b/2);
        return ((x%mod)*(x%mod))%mod;
    }
    else
    {
        ll x=bigmod(a,b-1);
        return ((x%mod)*(a%mod))%mod;
    }
}

ll NCR(ll n,ll r){
    if(r>n) return 0;
    else if(n==r || r==0) return 1LL;
    else if(r==1) return n%mod;
    ll x=ar[n];
    ll y=((ar[r]%mod) * (ar[n-r]%mod))%mod;
    ll res=(x*bigmod(y,mod-2))%mod;
    return res;
}

void solve(){
    ll n,m,k,need,l,r,v,mid,sz,sum=0;
    cin>>n>>m>>k;
    ll a[n+4];
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
   
    for(ll i=1;i<=n;i++){
        need=a[i]+k;
        l=i,r=n;
        while(l<=r){
            mid=(l+r)/2;
            if(a[mid]<=need){
                v=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        sz=v-i;
        if(sz>=m-1){
            ll ncr=NCR(sz,m-1);
            sum=(sum+ncr)%mod;
        }
    }
    cout<<sum<<endl;
}

int main() 
{
    FAST
    f();
    int t;
    cin>>t;
    while(t--)
    {
        solve();        
    }
    return 0;
}