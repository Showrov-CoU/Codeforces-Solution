#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
//#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

ll a[102];

void solve(){
    ll n,k;
    cin>>n>>k;
    ll m=n;
    ll p=n;
    m-=k;
    ll x=k*2+1;
    if(n>=x){
       for(int i=1;i<=n;i++){
           if(i%2==0 && k>0){a[i]=p;--p;--k;}
           else {a[i]=m;--m;}
       }
       for(int i=1;i<=n;i++)cout<<a[i]<<" ";
       cout<<endl;
    }
    else cout<<-1<<endl;
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