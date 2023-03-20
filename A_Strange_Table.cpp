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
    ll n,m,x;
    cin>>n>>m>>x;
    if(x%n){
      ll a=x/n;
      ll b=a+1;
      ll c=a*n+1;
      ll dif=(x-c)*m;
      cout<<dif+b<<endl; 
    }
    else{
        ll a=x/n;
        ll b=a-1;
        ll c=b*n+1;
        ll dif=(x-c)*m;
        cout<<dif+a<<endl;
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