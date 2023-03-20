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
    ll r,b,d;
    cin>>r>>b>>d;
    if(r==b) cout<<"YES"<<endl;
    else{
        int x=min(r,b);
        int y=max(r,b);
        int z;
        if(y%x) z=(y/x)+1;
        else z=y/x;

        if(abs(z-1)<=d)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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