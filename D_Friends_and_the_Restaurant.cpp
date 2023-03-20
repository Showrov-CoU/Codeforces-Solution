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
    int n;
    cin>>n;
    int a[n+2],b[n+2],c[n+2],d[n+2];
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++) v.push_back({a[i],b[i]});

    sort(v.begin(),v.end());
    
    
    for(int i=0;i<n;i++){
        c[i]=v[i].first;
        d[i]=v[i].second;
    }
    for(int i=1;i<n;i++){
        c[i]+=c[i-1];
        d[i]+=d[i-1];
    }
    int ans=0,cnt=0;
    for(int i=0;i<n;i++){
        cnt++;
        if(d[i]>=c[i] and cnt>=2){
            ans++;
            cnt=0;
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