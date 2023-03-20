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
    int a[n+1];
    map<ll,ll>m;
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<(1<<n);i++){
        ll sum=0;
        for(ll j=0;j<n;j++){
            if(i & (1<<j)) sum+=a[j];
        }
        m[sum]++;
    }
    for(auto v:m){
        if(v.second > 1){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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