#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
//#define vector        vector<int>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<set<int>> g(n+1);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        if(u>v) swap(u,v);
        g[u].insert(v);
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(g[i].size()==0) ans++;
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        if(x==1){
            int u,v;
            cin>>u>>v;
            if(u>v) swap(u,v);
            if(g[u].size()==0) ans--;
            g[u].insert(v);
        }
        else if(x==2){
            int u,v;
            cin>>u>>v;
            if(u>v) swap(u,v);
            g[u].erase(v);
            if(g[u].size()==0) ans++;
        }
        else cout<<ans<<endl;
    }
}

int main() 
{
    FAST
    solve();
    return 0;
}