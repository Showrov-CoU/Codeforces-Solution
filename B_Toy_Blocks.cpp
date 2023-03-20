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
    ll n,mx=INT_MIN,sum=0,ans;
    cin>>n;
    ll a[n+2];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        mx=max(mx,a[i]);
    }
    ll l=mx,r=1e12;
    while(r>=l){
        ll mid=(l+r)/2;
        ll x=((n-1)*mid)-sum;
        if(x>=0){
            r=mid-1;
            ans=x;
        }
        else l=mid+1;
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