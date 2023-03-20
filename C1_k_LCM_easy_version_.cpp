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
    ll n,k;
    cin>>n>>k;
    if(n%3==0)cout<<n/3<<" "<<n/3<<" "<<n/3<<endl;
    else 
    {
        if(n%2) cout<<1<<" "<<n/2<<" "<<n/2<<endl;
        else{
            int x=(n/2)-1;
            if(x%2) cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;
            else cout<<2<<" "<<x<<" "<<x<<endl;
        }
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