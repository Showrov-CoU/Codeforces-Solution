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
    ll n,m,i,ans;
    cin>>n;
    m=n;
    vector v;
    while(n!=0){
        v.push_back(n%10);
        n/=10;
    }
    reverse(v.begin(),v.end());
    ans=(v.size()-1)*9;
    
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