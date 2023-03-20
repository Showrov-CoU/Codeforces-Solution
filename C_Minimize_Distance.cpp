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
    ll n,k,x;
    cin>>n>>k;
    vector a,b;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>0) a.push_back(x);
        if(x<0) b.push_back(-x);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());

    ll ans=0;
    if(a.size()==0){
        if(b.size()!=0){
            for(int i=0;i<b.size();i+=k) ans+=b[i]*2;
            ans-=b[0];
        }
        cout<<ans<<endl;
    }
    else if(b.size()==0){
        if(a.size()!=0){
            for(int i=0;i<a.size();i+=k) ans+=a[i]*2;
            ans-=a[0];
        }
        cout<<ans<<endl;
    }
    else{
        for(int i=0;i<a.size();i+=k) ans+=a[i]*2;
        for(int i=0;i<b.size();i+=k) ans+=b[i]*2;
        if(a[0]>=b[0]) ans-=a[0];
        else ans-=b[0];
        cout<<ans<<endl;
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