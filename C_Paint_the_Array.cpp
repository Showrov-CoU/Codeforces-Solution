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
    ll n,x=0,y=0;
    cin>>n;
    ll a[n+2];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i+=2) {
        x=gcd(x,a[i]);
    }
    for(int i=1;i<n;i+=2) {
        y=gcd(y,a[i]);
    }
    if(x==y){
        cout<<0<<endl;
        return;
    }

    bool ok=true;
    for(int i=1;i<n;i+=2){
        if(a[i]%x==0){
            ok=false;
            break;
        } 
    }
    if(ok){
        cout<<x<<endl;
        return;
    }
    
    bool ok1=true;
    for(int i=0;i<n;i+=2){
        if(a[i]%y==0){
            ok1=false;
            break;
        } 
    }
    if(ok1){
        cout<<y<<endl;
        return;
    }
    
    cout<<0<<endl;
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