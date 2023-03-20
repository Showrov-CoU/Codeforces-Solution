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
    ll n,x,ans=0;
    cin>>n>>x;
    vector v(n);
    vector b(n);
    ll mn=1e9;
    int id=-1;
    for(int i=0;i<n;i++){
        cin>>v[i];
        ans+=v[i];
        ll val=v[i];
        b[i]=0;
        while(val%x==0){
            val/=x;
            b[i]++;
        }
        if(b[i]<mn){
            mn=b[i];
            id=i;
        }
    }
    ans=ans*(b[id] + 1);
    for(int i=0;i<id;i++){
        ans+=v[i];
    }
    cout<<ans<<endl;
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