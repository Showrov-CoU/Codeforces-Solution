#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<ll>
// #define gcd(a,b)      __gcd(a,b)
// #define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

void solve(){
    ll a,b,c,ans;
    cin>>a>>b>>c;
    ll ar[10]={1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};
    // while(1){
    //     ll x=__gcd(ar[a-1],ar[b-1]);
    //     ans=0;
    //     while(x!=0){
    //         ans++;
    //         x/=10;
    //     }
    //     if(ans==c) break;
    //     else{ar[a-1]=ar[a-1]+1;ar[b-1]=ar[b-1]+1;}
    // }
    // cout<<ar[a-1]<<" "<<ar[b-1]<<endl;
    cout<<ar[a-1]<<" "<<ar[b-1]+ar[c-1]<<endl;
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