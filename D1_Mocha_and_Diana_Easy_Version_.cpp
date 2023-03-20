#include <bits/stdc++.h>

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

using namespace std;

int p1[1005],p2[1005];

void initial(int n){
    for(int i=1;i<=n;i++){
        p1[i]=i;
        p2[i]=i;
    }
}

int find1(int u){
    if(p1[u]==u) return u;
    return p1[u]=find1(p1[u]);
}
int find2(int u){
    if(p2[u]==u) return u;
    return p2[u]=find2(p2[u]);
}

void union1(int u,int v){
    int x=find1(u);
    int y=find1(v);
    if(x!=y)
        p1[y]=x;
}
void union2(int u,int v){
    int x=find2(u);
    int y=find2(v);
    if(x!=y)
        p2[y]=x;
}

void solve(){
    int n,m1,m2,u,v;
    cin>>n>>m1>>m2;
    initial(n);
    for(int i=1;i<=m1;i++){
        cin>>u>>v;
        union1(u,v);
    }
    for(int i=1;i<=m2;i++){
        cin>>u>>v;
        union2(u,v);
    }
    vector<pair<int,int>>vc;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            int x=find1(i);
            int y=find1(j);
            int u=find2(i);
            int v=find2(j);
            if(x!=y && u!=v){
                vc.push_back({i,j});
                p1[y]=x;
                p2[v]=u;
            }
        }
    }
    cout<<vc.size()<<endl;
    for(auto i:vc)cout<<i.first<<" "<<i.second<<endl;
}

int main() 
{
    FAST
    
        solve();        
    
    return 0;
}