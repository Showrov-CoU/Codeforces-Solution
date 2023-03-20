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
    ll n;
    cin>>n;
    ll a[n+2];
    for(int i=0;i<n;i++) cin>>a[i];
    vector v;
    v.push_back(0);
    int ans=a[0];
    for(int i=1;i<n;i++){
        ll x=ans;
        ll c=1;
        ll f=0;
        ll y=a[i];
        while(x){
            ll bx=(x&1);
            ll by=(a[i]&1);
            if(bx==1 and by==0){
                f+=c;
            }
            c*=2;
            x=(x>>1);
            a[i]=(a[i]>>1);
        }
        ans=y^f;
        v.push_back(f);
    }
    for(auto i:v) cout<<i<<" ";
    cout<<endl;
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