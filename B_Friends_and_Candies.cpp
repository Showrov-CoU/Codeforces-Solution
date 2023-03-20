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
    ll n,sum=0,ans=0;
    cin>>n;
    ll a[n+2];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    // if(a[0]==a[n-1]) cout<<0<<endl;
    // else if(n==1) cout<<0<<endl;
    if(sum%n) cout<<-1<<endl;
    else{
        int x=sum/n;
        for(int i=n-1;i>=0;i--){
            if(a[i]>x)ans++;
        }
        cout<<ans<<endl;
    }
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