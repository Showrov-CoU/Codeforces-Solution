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

int p1[100005],p2[100005];

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
    if(x!=y){
        if(x>y) swap(x,y);
        p1[y]=x;
    }
}
void union2(int u,int v){
    int x=find2(u);
    int y=find2(v);
    if(x!=y){
        if(x>y) swap(x,y);
        p2[y]=x;
    }
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
    vector<pair<int,int>> vc;
    vector<int> first,second;
    
    for(int i=2;i<=n;i++){
        int x=find1(i);
        int y=find2(i);
        if(x!=1 && y!=1){
            vc.push_back({1,i});
            p1[x]=1;
            p2[y]=1;
        }
    }
   
    for(int i=2;i<=n;i++){
        int x=find1(i);
        int y=find2(i);
        if(x!=1 || y!=1){
            if(x==i) first.push_back(i);
            else if(y==i) second.push_back(i);
        } 
    }
    int mn=min(first.size(),second.size());
    cout<<vc.size()+mn<<endl;
    for(auto i:vc) cout<<i.first<<" "<<i.second<<endl;
    for(int i=0;i<mn;i++) cout<<first[i]<<" "<<second[i]<<endl;
}

int main() 
{
    FAST
    
    solve();        
    
    return 0;
}