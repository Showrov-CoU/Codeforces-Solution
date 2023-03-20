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
    ll n,w;
    cin>>n>>w;
    multiset<ll>ms;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        ms.insert(x);
    }
    int h=1,left=w;
    while(!ms.empty()){
        auto it=ms.upper_bound(left);
        if(it==ms.begin()){
           left=w;
           h++;
        }
        else{
            it--;
            ll val=*it;
            left-=val;
            ms.erase(it);
        }
    }
    cout<<h<<endl;
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