#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
//#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

const ll mx=2e5+2;
ll a[mx];

ll NCR(ll n,ll r){
    if(r>n) return 0;
    else if(n==r) return 1;
    ll m=(n-2)+1;
    ll ans=1;
    for(int i=n;i>=m;i--) ans*=i;
    return ans/2;
}

void solve(){
    ll n,m,k,x,l,r,mid,sz,sum=0;
    cin>>n;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    
    for(ll i=1;i<=n;i++){
        x=a[i]+2;
        l=i,r=n;
        while(r-l>1){
            mid=(l+r)/2;
            if(a[mid]<=x) l=mid;
            else r=mid;
        }
        if((a[r]-a[i]) <= 2) sz=r; 
        else sz=l;
        sz=sz-i;
        //cout<<sz<<endl;
        if(sz>=1){
            ll ncr=NCR(sz,2);
            sum+=ncr;
        }
    }
    cout<<sum<<endl;
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