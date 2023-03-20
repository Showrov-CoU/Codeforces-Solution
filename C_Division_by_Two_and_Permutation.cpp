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
    ll n;
    cin>>n;
    ll a[n+2];
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<32;i++){
        for(int i=0;i<n;i++){
            if(a[i]>n){
                a[i]=a[i]/2;
            }
        }
    }
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
   
    if(mp.size()==n){
        cout<<"YES"<<endl;
        return;
    }

    set<int>s;
    int j=0;
    for(auto i:mp){
        s.insert(i.first);
    }
    
    for(auto i:mp){
        if(i.second!=1){
            for(int j=0;j<i.second-1;j++){
                int sz=s.size();
                int x=i.first/2;
                while(x>=1){
                    if(x<=0) break;
                    s.insert(x);
                    if(sz!=s.size()) break;
                    else x/=2;
                } 
            }
        }
    }
    if(s.size()==n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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