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
    ll n,k=0;
    cin>>n;
    ll a[n+2];
    for(int i=0;i<n;i++) cin>>a[i];

    vector<pair<ll,ll>> ans;

    for(ll i = 0; i < n-1; i++) {   
        for(ll j = 0; j < n-i-1; j++){
            if (a[j] > a[j+1]) {
                swap(a[j],a[j+1]);
                k++;
                ans.push_back({j+1,j+2});
            }   
        }
    }
    if(k==0){
        cout<<k<<endl;
        return;
    }
    cout<<k<<endl;
    for(auto i:ans){
        cout<<i.first<<" "<<i.second<<" "<<1<<endl;
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