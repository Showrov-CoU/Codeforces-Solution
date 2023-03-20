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
    int n,m;
    cin>>n>>m;
    int a[n+1][m+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    vector res;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int sum=0;
            sum+=a[i][j];
            
            int ddr1=i+1,ddc1=j-1;
            while(ddr1<n and ddc1>=0){
                sum+=(a[ddr1++][ddc1--]);
            }
            int udr1=i-1,udc1=j+1;
            while(udr1>=0 and udc1<m){
                sum+=(a[udr1--][udc1++]);
            }
            int ddr2=i+1,ddc2=j+1;
            while(ddr2<n and ddc2<m){
                sum+=(a[ddr2++][ddc2++]);
            }
            int udr2=i-1,udc2=j-1;
            while(udr2>=0 and udc2>=0){
                sum+=(a[udr2--][udc2--]);
            }
            res.push_back(sum);
        }
    }
    sort(res.begin(),res.end());
    cout<<res[res.size()-1]<<endl;
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