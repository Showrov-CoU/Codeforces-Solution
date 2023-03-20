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
    vector v;
    map<ll,int>m;
    bool ok=false;
    cin>>n;
    for(ll i=1;i<=(cbrt(n)+2);i++){
        v.push_back(i*i*i);
        m[i*i*i]++;
    }
    for(int i=0;i<v.size();i++){
        ll d=n-v[i];
        if(m[d]==1){
            ok=true;
            break;
        }
    }
    if(ok)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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

