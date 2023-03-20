#include <bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define yes           cout<<"YES"<<endl
#define no            cout<<"NO"<<endl
#define fix(x)        cout<<fixed<<setprecision(x)
#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update > pbds;
const ll N=2e5+1;
ll arr[N][19];

void f(){
    for(int i=0;i<19;i++) arr[0][i]=0;
    for(int i=1;i<N;i++)
    {
        ll in=0;
        ll x=i;
        while(x>0)
        {
            arr[i][in]=x%2+arr[i-1][in];
            x/=2;
            in++;
        }
    }
}

void solve(){
    
    ll l,r;
    cin>>l>>r;
    ll mx=LLONG_MIN;
    for(int i=0;i<19;i++)
    {
        mx=max(mx,arr[r][i]-arr[l-1][i]);
    }
    cout<<r-l+1-mx<<endl;
}

int main() 
{
    FAST
    f();
    int t;
    cin>>t;
    while(t--)
    {
        solve();        
    }
    return 0;
}