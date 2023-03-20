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
//#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update > pbds;

int mxdigit(ll n){
    int mx=-1;
    while(n>0){
        int r=(n%10);
        n/=10;
        mx=max(mx,r);
    }
    return mx;
}

int res(int l,ll m,int ans){
    string s=to_string(m);
    if(s.size()>l) return -1;
    
    else if(s.size()==l){
        cout<<ans<<endl;
        return -1;
    }
    else{
        int digit=mxdigit(m);
        ll newnmbr=(ll)(m*digit);
        res(l,newnmbr,ans+1);
    }   
}

void solve(){
    ll n,x;
    cin>>n>>x;
    if(x==1){
        cout<<-1<<endl;
    }
    else res(n,x,0);
 
}

int main() 
{
    FAST
    // int t;
    // cin>>t;
    // while(t--)
    // {
        solve();   
    //}
    return 0;
}