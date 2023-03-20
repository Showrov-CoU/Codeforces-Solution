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
    ll n,m,odd=0,even=0;
    cin>>n;
    m=2*n;
    ll a[m+1];
    for(int i=0;i<m;i++)cin>>a[i];
    for(int i=0;i<m;i++){
        if(a[i]%2==1)odd++;
        else even++;
    }
    if(odd==even)cout<<"YES"<<endl;
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