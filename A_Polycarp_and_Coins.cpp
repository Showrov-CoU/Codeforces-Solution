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
    ll c1,c2;
    c2=n/3;
    c1=c2;
    if((c1+2*c2)==n) cout<<c1<<" "<<c2<<endl;
    else{
        ll x=c1+1;
        if((x+2*c2)==n) cout<<x<<" "<<c2<<endl;
        else cout<<c1<<" "<<c2+1<<endl;
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