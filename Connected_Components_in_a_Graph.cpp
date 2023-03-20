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

vector g[100];
int vis[100];

void DFS(int node){
    vis[node]=1;
    for(int child:g[node]){
        if(vis[child]==0) DFS(child);
    }
}
void solve(){
    int n,e,x,y,cnt=0;
    cin>>n>>e;
    while(e--){
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        if(vis[i]==0){
            cnt++;
            DFS(i);
        }
    }
    cout<<cnt<<endl;
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