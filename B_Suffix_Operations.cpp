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
#define vector        vector<int>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update > pbds;

void solve(){
    int n,x;
    cin>>n;
    vector v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans=0;
    for(int i=0;i<n-1;i++){
        ans+=abs(v[i]-v[i+1]);
    }
    ll ans1=0;
    for(int i=0;i<n;i++){
        ll j=i;
        ll x=0;
        if(j>0){
            x+=abs(v[j]-v[j-1]);
        }
        if(j+1<n){
            x+=abs(v[j]-v[j+1]);
        }
        if(j>0 && j<n-1){
            x-=abs(v[j+1]- v[j-1]);
        }
        ans1=max(ans1,x);
    }
    cout<<ans-ans1<<endl;
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