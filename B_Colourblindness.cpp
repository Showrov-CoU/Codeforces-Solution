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
    int n;
    cin>>n;
    string s[3];
    for(int i=0;i<2;i++) cin>>s[i];
    
    bool ok=false;
    for(int i=0;i<n;i++){
        if((s[0][i]=='B' and s[1][i]=='R') or (s[0][i]=='R' and s[1][i]=='B')){
            ok=true;
            break;
        }
        else if((s[0][i]=='G' and s[1][i]=='R') or (s[0][i]=='R' and s[1][i]=='G')){
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