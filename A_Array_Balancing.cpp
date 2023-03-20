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
    ll n,x,y,sum=0,sum2=0;
    cin>>n;
    ll a[n+2],b[n+2];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        // x=abs(a[i]-a[i+1]);
        // y=abs(a[i]-b[i+1]);
        // if(x<y) continue;
        // else{
        //     swap(a[i+1],b[i+1]);
        // }
        if(a[i]>b[i]) continue;
        else swap(a[i],b[i]);
    }
    for(int i=1;i<n;i++){
        sum+=abs(a[i]-a[i-1]);
    }
    for(int i=1;i<n;i++){
        sum+=abs(b[i]-b[i-1]);
    }

    
    
    cout<<sum<<endl;
    
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