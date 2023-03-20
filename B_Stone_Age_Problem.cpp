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

//typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update > pbds;

ll tr[4*200005];
ll lazy[4*200005];
ll a[200005];

void build(int node,int b,int e){
    if(b==e){
        tr[node]=a[b];
        return;
    }
    int mid=(b+e)/2;
    build(2*node,b,mid);
    build(2*node+1,mid+1,e);
    tr[node]=tr[2*node]+tr[2*node+1];
}
void update(int node,int b,int e,int l,int r,ll v){
    if(lazy[node]!=0){
        tr[node]=(e-b+1)*lazy[node];
        if(b!=e){
            lazy[2*node]=lazy[node];
            lazy[2*node+1]=lazy[node];
        }
        lazy[node]=0;
    }
    if(e<l || b>r) return;
    if(b>=l && e<=r){
        tr[node]=(e-b+1)*v;
        if(b!=e){
            lazy[2*node]=v;
            lazy[2*node+1]=v;
        }
        return;
    }
    update(2*node,b,(b+e)/2,l,r,v);
    update(2*node+1,((b+e)/2)+1,e,l,r,v);
    tr[node]=tr[2*node]+tr[2*node+1];
}
ll query(int node,int b,int e,int l,int r){
    if(e<l || r<b) return 0;
    if(b>=l and e<=r) return tr[node];
    int mid=(b+e)/2;
    return query(2*node,b,mid,l,r) + query(2*node+1,mid+1,e,l,r);
}

int main() 
{
    FAST
    memset(tr,0,sizeof(tr));
    memset(lazy,0,sizeof(lazy));  
    int n,q,t,id,v;
    cin>>n>>q;     
    for(int i=1;i<=n;i++) cin>>a[i];
    build(1,1,n);
    while(q--){
        cin>>t;
        if(t==1){
            cin>>id>>v;
            update(1,1,n,id,id,v);
        }
        else{
            cin>>v;
            update(1,1,n,1,n,v);
        }
        cout<<query(1,1,n,1,n)<<endl;
    }
    return 0;
}