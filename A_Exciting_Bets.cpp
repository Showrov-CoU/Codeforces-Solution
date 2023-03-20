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
    ll a,b,m,d,p,q,r,x,y;
    cin>>a>>b;
    if(a==b) cout<<0<<" "<<0<<endl;
    else if(abs(a-b)==1) cout<<1<<" "<<0<<endl;
    else{
        d=abs(a-b);
        m=min(a,b);
        r=m%d;
        x=d-r;
        cout<<d<<" "<<min(r,x)<<endl;
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