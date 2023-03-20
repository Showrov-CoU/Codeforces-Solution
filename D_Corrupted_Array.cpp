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
    ll n,sum=0;
    cin>>n;
    multiset<ll>s;
    for(int i=0;i<n+2;i++){
        ll x;
        cin>>x;
        s.insert(x);
        sum+=x;
    }
    bool ok=false;
    for(auto i=s.begin();i!=s.end();i++){
        ll su=(sum-*i)/2;
        if(s.find(su)!=s.end()){
            ok=true;
            break;
        }
    }
    if(!ok)cout<<-1<<endl;
    else{
        
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