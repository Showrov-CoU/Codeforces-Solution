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

int solve(){
    ll n;
    cin>>n;
    ll x=n/3;
    if(n%3==0) cout<<x<<" "<<x+1<<" "<<x-1<<endl;
    else if(n%3==1){
        if(x-2>0) cout<<x+1<<" "<<x+2<<" "<<x-2<<endl;
        else cout<<x<<" "<<x+2<<" "<<x-1<<endl;
    }   
    else{
        if(x-1>0) cout<<x+1<<" "<<x+2<<" "<<x-1<<endl;
        else cout<<x+1<<" "<<x+2<<" "<<1<<endl;
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