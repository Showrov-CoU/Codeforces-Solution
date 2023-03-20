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
    int n,r,b;
    cin>>n>>r>>b;
    vector<string> ans(b+2); 
    string red="";

    int x=r/(b+1);
    int y=r%(b+1);
    for(int i=0;i<x;i++){
        red+='R';
    }
    for(int i=0;i<b+1;i++){
        ans[i]=red;
    }
    for(int i=0;i<y;i++){
        ans[i]+='R';
    }
    for(int i=0;i<b;i++){
        ans[i]+='B';
    }
    for(int i=0;i<b+1;i++) cout<<ans[i];
    cout<<endl;
    
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