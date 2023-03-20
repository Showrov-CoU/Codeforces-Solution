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

// ll a[16]={2050,20500,205000,2050000,20500000,205000000,2050000000,20500000000,205000000000,
//        2050000000000,20500000000000,205000000000000,2050000000000000,20500000000000000,205000000000000000,
//        2050000000000000000};

void solve(){
    ll n,x=2050;
    ll m=x;
    cin>>n;
    if(n<x){cout<<-1<<endl;return;}
    else{
        while(x<=n) x*=10;
        x/=10;
        int ans=0;
        while(1){
            n-=x;
            ++ans;
            while(x>n) x/=10;
            if(n%2050){cout<<-1<<endl;break;}
            else if(n==0){cout<<ans<<endl;break;}
            else continue;
       }
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