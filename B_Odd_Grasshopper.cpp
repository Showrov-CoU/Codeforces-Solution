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


void solve(){
    ll x,n;
    cin>>x>>n;
    if(x%2){
        if(n%4==0) cout<<x<<endl;
        else if(n%4==1) cout<<x+((n/4)*4)+1<<endl;
        else if(n%4==2) cout<<x-1<<endl;
        else cout<<x-((n/4)*4)-4<<endl;
    }
    else{
        if(n%4==0) cout<<x<<endl;
        else if(n%4==1) cout<<x-((n/4)*4)-1<<endl;
        else if(n%4==2) cout<<x+1<<endl;
        else cout<<x+((n/4)*4)+4<<endl;
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