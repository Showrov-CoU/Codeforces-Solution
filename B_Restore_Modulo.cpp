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

ll a[100005];
ll b[100005];

void solve(){
    ll n,cnt=1;
    cin>>n;
    set<ll>s;
    int mx=INT_MIN;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(i>1){
           int x=a[i]-a[i-1];
           mx=max(mx,x);
           if(a[i]==a[i-1]) cnt++;
        }
    }
    if(cnt==n)cout<<0<<endl;
    else{
        b[1]=a[1];
        for(int i=2;i<=n;i++){
            b[i]=mx+b[i-1];
        }
        for(int i=1;i<=n;i++){
            s.insert(b[i]-a[i]);
        }
    }
    s.erase(s.begin());
    ll ans=*s.begin();
    if(ans<=a[1] || ans<=a[2]) cout<<-1<<end;
    else cout<<ans<<" "<<mx<<endl;
}

int main() 
{
    FAST
    int t;
    cin>>t;
    while(t--)
    {
       solve();
       //cout<<gcd(4000000000,2000000000)<<endl; 
           
    }
    return 0;
}