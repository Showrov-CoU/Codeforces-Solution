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
    if(n<=6) cout<<15<<endl;
    else if(n<=8) cout<<20<<endl;
    else if(n<=10) cout<<25<<endl;
    else{
        ll ans=n/10 * 25;
        int m=n%10;
        if(m==0) cout<<ans<<endl;
        else if(m==1 || m==2) cout<<ans+5<<endl;
        else if(m==3 || m==4) cout<<ans+10<<endl;
        else if(m==5 || m==6) cout<<ans+15<<endl;
        else if(m==7 || m==8) cout<<ans+20<<endl;
        else cout<<ans+25<<endl;
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