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
    ll n,m,c;
    cin>>n>>m>>c;
    if(n==m){
        int ans=((n-1)*m)+n-1;
        if(ans==c) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else{
        int ans1=(n-1)+(n*(m-1));
        int ans2=(m-1)+(m*(n-1));
        if(ans1==c || ans2==c) cout<<"YES"<<endl;
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