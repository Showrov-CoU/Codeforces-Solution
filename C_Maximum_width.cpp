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
    ll n,m,ans=0;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    vector p(m),q(m);
    ll j=0;
    for(ll i=0;i<n;i++){
        if(s[i]==t[j]){
            p[j]=i;
            j++;
        }
        if(j==m)break;
    }
    j=m-1;
    for(ll i=n-1;i>=0;i--){
        if(s[i]==t[j]){
            q[j]=i;
            j--;
        }
        if(j==-1)break;
    }
    for(int i=1;i<m;i++){
        ans=max(ans,q[i]-p[i-1]);
    }
    cout<<ans<<endl;
}

int main() 
{
    FAST
    int t;
    
        solve();        
    
    return 0;
}