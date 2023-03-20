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
    ll n,x=0,sum=0,mx=LLONG_MIN,ans=LLONG_MAX;
    cin>>n;
    ll a[n+2],b[n+2];
    multimap<ll,ll>mp;
    for(ll i=0;i<n;i++) {
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    for(int i=0;i<n;i++) {
        cin>>b[i];
        sum+=b[i];
    }
    for(int i=0;i<n;i++){
        // mp[a[i]]=b[i];
        mp.insert(make_pair(a[i],b[i]));
    }
    //for(auto i:mp)cout<<i.first<<" "<<i.second<<endl;
    for(auto i:mp){
        x+=i.second;
        ans=min(ans,max(i.first,sum-x));
    }
    ans=min(ans,min(mx,sum));
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