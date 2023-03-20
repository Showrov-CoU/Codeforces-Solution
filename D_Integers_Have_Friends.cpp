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
    ll ar[n+1];
    for(int i=0;i<n;i++) cin>>ar[i];
    ll ans=INT_MIN;
    ll a=0,b=0,x=0,y=0,z=0;
    for(int i=0;i<n;i++){
        if(ar[i]%2==0)a++;
        else b++;
    }
    ans=max(a,b);
    for(int i=0;i<n;i++){
        if(ar[i]%3==0)x++;
        if(ar[i]%3==1)y++;
        else z++;
    }
    ans=max(ans,max(x,max(y,z)));
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