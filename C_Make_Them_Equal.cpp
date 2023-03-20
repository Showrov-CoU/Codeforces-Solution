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
    ll n,cnt=0; char c;
    cin>>n>>c;
    string s; cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]==c) cnt++;
    }
    if(cnt==n){ cout<<0<<endl; return;}
    for(int i=2;i<=n;i++){
        bool ok=true;
        for(int j=i;j<=n;j+=i){
            if(s[j-1]!=c){
                ok=false;
                break;
            }
        }
        cout<<i<<endl;
        if(ok){
            cout<<1<<endl;
            cout<<i<<endl; return;
        }
    }
    cout<<2<<endl;
    cout<<n-1<<" "<<n<<endl;
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