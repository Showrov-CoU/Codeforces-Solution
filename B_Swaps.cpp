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
    ll n,ans=1e9;
    cin>>n;
    vector<pair<ll,ll>> odd(n),even(n);
    
    for(int i=0;i<n;i++) cin>>odd[i].first, odd[i].second=i;
    for(int i=0;i<n;i++) cin>>even[i].first, even[i].second=i;

    if(odd[0].first < even[0].first){
        cout<<0<<endl;
        return;
    }

    sort(odd.begin(),odd.end());
    sort(even.begin(),even.end());

    vector<ll> minimum(n);
    minimum[n-1]=even[n-1].second;
    for(int i=n-2;i>=0;i--){
        minimum[i]=min(minimum[i+1],even[i].second);
    }
    
    for(int i=0;i<n;i++) ans=min(ans,odd[i].second+minimum[i]);
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