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
    int n;
    cin>>n;
    int a[n+4],b[n+4];

    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=1;i<n;i++) a[i]=a[i]+a[i-1];
    for(int i=1;i<n;i++) b[i]=b[i]+b[i-1];
    
    int ans=a[n-1]-a[0];
    for(int i=1;i<n;i++){
        int x=a[n-1]-a[i];
        int y=b[i-1];
        ans=min(ans,max(x,y));
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