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

void solve(){
    ll n,x,val;
    cin>>n;
    vector<pair<ll,ll>> v;
    for(int i=0;i<n;i++){
        cin>>x;
        ll mx=-1;
        for(int j=0;j<x;j++){
            cin>>val;
            mx=max(mx,val-j+1);
        }
        v.push_back({mx,x});
    }
    sort(v.begin(),v.end());
    ll l,r,ans=-1;
    l=v[0].first , r=v[n-1].first;

    while(l<=r){
        ll mid=(l+r)/2;
        ll curr=mid;
        bool ok=false;
        for(int i=0;i<v.size();i++){
            if(curr>=v[i].first){
                curr+=v[i].second;
            }
            else{
                ok=true;
                break;
            }
        }
        if(ok) l=mid+1;
        else{
            ans=mid;
            r=mid-1;
        }
    }
    cout<<ans<<endl;
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