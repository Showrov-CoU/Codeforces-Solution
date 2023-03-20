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

int solve(){
    int n,cnt=0;
    cin>>n;
    ll a[n+2];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int id=(n/2);
    if(n%2==0) id--;

    vector v;
    for(int i=0;i<=id;i++){
        v.push_back(a[i]);
        if((id+i+1)<n) v.push_back(a[id+i+1]);
    }
    int sz=v.size();
    
    if(v[0]>=v[sz-1] || v[0]>=v[1]) no;
    else if(v[sz-2]>=v[sz-1] || v[0]>=v[sz-1]) no;
    else{
        bool ok=false;
        for(int i=1;i<sz-1;i+=2){
            if(v[i]<=v[i-1] || v[i]<=v[i+1]){
                ok=true;
                break;
            }
        }
        if(!ok){
            yes;
            for(auto i:v) cout<<i<<" ";
            cout<<endl;
        }
        else no;
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