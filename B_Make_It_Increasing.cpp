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
    int n,ans=0;
    cin>>n;
    int a[n+2];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=n-2;i>=0;i--){
        if(a[i]>=a[i+1]){
            int x=a[i];
            while(x>=a[i+1] and x!=0){
                x/=2;
                ans++;
            }
            a[i]=x;
        }
    }
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            cout<<-1<<endl;
            return;
        }
    }
    cout<<ans<<endl;
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