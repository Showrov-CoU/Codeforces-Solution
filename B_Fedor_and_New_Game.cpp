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
    int n,m,k,ans=0;
    cin>>n>>m>>k;
    int a[m+2];
    for(int i=0;i<m+1;i++)cin>>a[i];
    for(int i=0;i<m;i++){
        int cnt=0;
        int xr=a[m]^a[i];
        while(xr){
            xr=xr&(xr-1);
            cnt++;
        }
        //int x=a[m];
        //for(int j=0;j<=20;j++){
            // int x=a[m]&(1<<j);
            // int y=a[i]&(1<<j);
            // if(x>=1) x=1;
            // if(y>=1) y=1;
            // if(x!=y) cnt++;


            //if(((x>>i)&1) != ((a[i]>>i)&1)) cnt++;
        //}
        if(cnt<=k) ans++;
    }
    cout<<ans<<endl;
}

int main() 
{
    FAST
    
        solve();        
    
    return 0;
}