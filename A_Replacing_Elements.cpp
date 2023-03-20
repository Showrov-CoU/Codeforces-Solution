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
    ll n,d;
    cin>>n>>d;
    //ll a[n+2];
    vector a(n);
    fr(i,n)cin>>a[i];
    sort(a.begin(),a.end());
    if(a.back()<=d)cout<<"YES"<<endl;
    else{
        if(a[0]+a[1] > d) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
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