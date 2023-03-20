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
// #define vector        vector<int>
// #define vec           vector<vector<int>>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update > pbds;


void solve(){
    ll n,q,ax,k;
    cin>>n;
    vector<ll> a(n);
    unordered_map<ll,ll> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    vector<ll> prev(n),curr(n);
    prev=a;
    vector<vector<ll>> v;
    v.push_back(a);

    for(int i=0;i<n;i++) curr[i]=mp[a[i]];
    
    int time=0;
    while(prev!=curr){
        mp.clear();
        v.push_back(curr);
        time++;
        prev=curr;
        for(int i=0;i<n;i++) mp[curr[i]]++;
        for(int i=0;i<n;i++) curr[i]=mp[curr[i]];
    }
    cin>>q;
    while(q--){
        cin>>ax>>k;
        if(k>=time) cout<<v[time][ax-1]<<endl;
        else cout<<v[k][ax-1]<<endl;
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