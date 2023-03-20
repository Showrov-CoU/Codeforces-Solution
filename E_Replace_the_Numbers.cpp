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
    ll q,x,a,b;
    cin>>q;
    unordered_map<ll,ll>mp;
    vector v;
    while(q--){
        cin>>x;
        if(x==1){
            cin>>a;
            mp[a]++;
            v.push_back(a);
        }
        else if(x==2){
            cin>>a>>b;
            mp[a]--;
            mp[b]++;
        }
    }
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
        // for(int i=0;i<it.second;i++) cout<<it.first<<" ";
    }
    cout<<endl;
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