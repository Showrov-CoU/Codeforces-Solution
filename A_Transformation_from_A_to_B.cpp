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

// void bfs(int a , int b){
//     map<ll,ll> vis;
//     map<ll,ll> par;
//     vector ans;
//     queue<ll>q;

//     ll x,u,v,ok=0;
//     q.push(a);
//     while(!q.empty()){
//         x=q.front();
//         q.pop();
//         vis[x]=1;
//         u=2*x;
//         if(vis[u]==0 && u<=b){
//         vis[u]=1;
//         par[u]=x;
//         q.push(u);
//         if(u==b){
//             ok=1;
//             break;
//         }
//     }
//     v=10*x + 1;
//     if(vis[v]==0 && v<=b){
//         vis[v]=1;
//         par[v]=x;
//         q.push(v);
//         if(v==b){
//             ok=1;
//             break;
//         }
//     }
// }
//     if(ok){
//         int parent=par[b];
//         ans.push_back(parent);
//         while(parent != a){
//             parent=par[parent];
//             ans.push_back(parent);
//         }
//         yes;
//         cout<<ans.size()+1<<endl;
//         for(int i=ans.size()-1;i>=0;i--) cout<<ans[i]<<" ";
//         cout<<b<<endl;
//     }
//     else no;
// }

/*---------------------- DFS ----------------------*/

bool ok;
map<ll,ll> vis;
map<ll,ll> par;
vector ans;

void dfs(ll a,ll b){
    if(vis[a]==0 && a<=b){
        vis[a]=1;
        ll x=2*a;
        if(x>b ) return;
        par[x]=a;
        if(x==b){
            ok=true;
            return;
        }
        dfs(x,b);
        ll y=10*a + 1;
        if(y>b) return;
        par[y]=a;
        if(y==b){
            ok=true;
            return;
        }
        dfs(y,b);
    }
}

int main() 
{
    FAST
    ll n,k;
    cin>>n>>k;
    //bfs(n,k);
    dfs(n,k);
    
    if(ok){
        ll p=par[k];
        ans.push_back(k);
        ans.push_back(p);
        while(p!=n){
            p=par[p];
            ans.push_back(p);
        }
        yes;
        cout<<ans.size()<<endl;
        for(int i=ans.size()-1;i>=0;i--) cout<<ans[i]<<" ";
        cout<<endl;
    }
    else no;

    return 0;
}