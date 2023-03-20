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
    int n,m,x,y;
    cin>>n>>m;
    int a[n+2][n+2]={0};
   
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        a[x][y]=1;
    }
    if(m>n){
        no;
        return;
    }
    int trr=0;
    for(int i=1;i<=n;i++){
        int tr=0;
        for(int j=1;j<=n;j++){
            if(a[i][j]==1) tr++;
        }
        if(tr>=3){
            no;
            return;
        }
        if(tr==2) trr++;
    }
    if(trr>1){
        no;
        return;
    }
    else{
        int tcc=0;
        for(int i=1;i<=n;i++){
            int tc=0;
            for(int j=1;j<=n;j++){
                if(a[j][i]==1) tc++;
            }
            if(tc>=3){
                no;
                return;
            }
            if(tc==2) tcc++;
        }
        if(tcc>1){
            no;
            return;
        }
        else yes;
    }
    
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