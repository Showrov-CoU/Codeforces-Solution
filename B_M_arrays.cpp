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
    ll n,m,ans=0;
    cin>>n>>m;
    ll a[m+1]={0};
    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        a[j%m]++;
    }
    if(a[0]) ans++;
    for(int i=1;i<m;i++){
        if(a[i]){
            if(abs(a[i]-a[m-i])<=1) ++ans;
            else ans+=abs(a[i]-a[m-i]);
            a[m-i]=0;
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