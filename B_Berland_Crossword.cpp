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
    int n,u,r,d,l;
    cin>>n>>u>>r>>d>>l;
    int u1=u,r1=r,d1=d,l1=l;

    if(u==n) l1--,r1--;
    if(r==n) u1--,d1--;
    if(d==n) l1--,r1--;
    if(l==n) u1--,d1--;

    if(u==n-1){
        if(l1>r1) l1--;
        else r1--;
    }
    if(r==n-1){
        if(u1>d1) u1--;
        else d1--;
    }
    if(d==n-1){
        if(l1>r1) l1--;
        else r1--;
    }
    if(l==n-1){
        if(u1>d1) u1--;
        else d1--;
    }

    if(u1<0 || r1<0 || d1<0 || l1<0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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