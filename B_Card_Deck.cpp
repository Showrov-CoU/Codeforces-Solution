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

const int N=1e5+10;

void solve(){
    ll n;
    cin>>n;
    int a[n+2],b[N];
    for(int i=1;i<=n;i++){
        cin>>a[i];b[a[i]]=i;
    }
    vector ans;
    for(int i=n;i>0;i--){
        for(int j=b[i];j<=n;j++){
            if(a[j]==-1) break;
            ans.push_back(a[j]);
            a[j]=-1;
        }
    }
    for(auto e : ans)cout<<e<<" ";
    cout<<endl; 
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