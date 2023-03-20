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
    ll n;
    cin>>n;
    ll a[n+2];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        yes;
        return;
    }
    bool ok=false;
    string s="";
    ll dif1=0,dif2=0,dif3=0;
    for(int i=1;i<n;i++){
        if(a[i]-a[i-1]==1) dif1++;
        else if(a[i]-a[i-1]==2) dif2++;
        else if(a[i]-a[i-1]==3) dif3++;
        else if(a[i]-a[i-1]>=4){
            ok=true;
            break;
        }
        if(dif3>1){
            ok=true;
            break;
        }
        if(dif3>=1 and dif2>=1){
            ok=true;
            break;
        }
        if(dif2>2){
            ok=true;
            break;
        }
    }
    if(ok) no;
    else yes;
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
