#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define fr(i,n)       for(int i=0;i<n;i++)
#define rfr(i,n)      for(int i=n-1;i>=0;i--)
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

void solve(){
    ll p,a,b,c;
    cin>>p>>a>>b>>c;
    if(p%a==0 or p%b==0 or p%c==0) cout<<0<<endl;
    else{
        if(p<a and p<b and p<c) cout<<min(a,min(b,c))-p<<endl;
        else{
            a=(p/a + 1)*a;
            b=(p/b + 1)*b;
            c=(p/c + 1)*c;
            cout<<min(a-p,min(b-p,c-p))<<endl;
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