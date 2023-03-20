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
    int n,m=5;
    cin>>n;
    vector<vector<int>> a(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    for(int d1=0;d1<m;d1++){
        for(int d2=d1+1;d2<m;d2++){
            int cntd1=0;
            int cntd2=0;
            int common=0;
            for(int i=0;i<n;i++){
                if(a[i][d1]) cntd1++;
                if(a[i][d2]) cntd2++;
                if(a[i][d1] && a[i][d2]) common++;
            }
            if(cntd1>=n/2 && cntd2>=n/2 && cntd1+cntd2-common==n){
                yes;
                return;
            }
        }
    }
    no;
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