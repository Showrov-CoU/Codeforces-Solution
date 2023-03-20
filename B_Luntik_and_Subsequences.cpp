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

ll ncr(int n, int r)
{
    long long p = 1, k = 1;
    if (n - r < r) r = n - r;
    if (r != 0) {
        while (r) {
            p *= n; k *= r;
            long long m = __gcd(p, k);
            p /= m; k /= m;
            n--; r--;
        }
    }
 
    else p = 1;
    
    return p;
}

void solve(){
    ll n,x,sum=0,one=0,zero=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==0) zero++;
        if(x==1) one++;
    }
    for(int i=1;i<=zero;i++){
        sum+=ncr(zero,i);
    }
    cout<<one+(sum*one)<<endl;
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