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
    ll a,b,c;
    cin>>a>>b>>c;
    ll mx=max(a,max(b,c));
    if(a==b && b==c){
        cout<<1<<" "<<1<<" "<<1<<endl;
        return;
    }
    else if(mx==a && mx==b){
        cout<<1<<" "<<1<<" "<<(mx+1)-c<<endl;
        return;
    }
    else if(mx==a && mx==c){
        cout<<1<<" "<<(mx+1)-b<<" "<<1<<endl;
        return;
    }
    else if(mx==b && mx==c){
        cout<<(mx+1)-a<<" "<<1<<" "<<1<<endl;
        return;
    }
    else if(mx==a){
        cout<<0<<" ";
        cout<<(mx+1)-b<<" "<<(mx+1)-c<<endl;
        return;
    }
    else if(mx==b){
        cout<<(mx+1)-a<<" ";
        cout<<0<<" ";
        cout<<(mx+1)-c<<endl;
        return;
    }
    
    else{
        cout<<(mx+1)-a<<" "<<(mx+1)-b<<" ";
         cout<<0<<endl;
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