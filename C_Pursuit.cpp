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
    ll n,me=0,you=0;
    cin>>n;
    int a[n+2],b[n+2];
    for(int i=0;i<n;i++)cin>>a[i],me+=a[i];
    for(int i=0;i<n;i++)cin>>b[i],you+=b[i];
    sort(a,a+n);
    sort(b,b+n);
    ll k=n/4;
    for(int i=0;i<k;i++)me-=a[i],you-=b[i];
    if(me>=you){
        cout<<0<<endl;
        return;
    }
    ll x=k;
    ll y=k-1;
    ll r=n;
    ll ans=0,z=0;
    while(true){
        if(me>=you) break;
        me+=100;
        z++;
        if(y>=0){
            you+=b[y];
            y--;
        }
        r++;
        if(r/4 > k){
            k++;
            me-=a[x];
            x++;
            if(z<k){
                you-=b[y+1];
                y++;
            }
        }
        ans++;
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