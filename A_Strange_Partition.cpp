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
#define rfr(i,n)    for(int i=n-1;i>=0;i--)
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

void solve(){
    ll n,x,s=0,mx=0,mn;
    cin>>n>>x;
    vector v(n);
    for(ll &i : v){
        cin>>i;
        s+=i;
        if(i%x) mx+=(i/x)+1;
        else mx+=i/x;
    }
    if(s%x)mn=(s/x)+1;
    else mn=s/x;
    cout<<mn<<" "<<mx<<endl; 
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