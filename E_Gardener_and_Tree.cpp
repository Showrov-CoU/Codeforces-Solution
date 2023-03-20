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
    ll n,k,u,v;
    cin>>n>>k;
    if(n==1){
        cout<<0<<endl;
        return;
    }
    vector a[n+1];
    vector cnt(n+1,0);
    for(int i=1;i<=n-1;i++){
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
        cnt[u]++,cnt[v]++;
    }
    queue<ll> q;
    vector visited(n+1,0);
    for(int i=1;i<=n;i++){
        if(cnt[i]==1){
            q.push(i);
            visited[i]=1;
        }
    }
    for(int i=2;i<=k && !q.empty();i++){
        ll s=q.size();
        while(s--){
            auto x=q.front();q.pop();
            for(auto y:a[x]){
                cnt[y]--;
                if(cnt[y]==1){
                    q.push(y);
                    visited[y]=1;
                }
            }
        }
    }
    ll ans=0;
    for(int i=1;i<=n;i++){
        if(visited[i]==0) ans++;
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