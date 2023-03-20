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
    string s[n+1];
    for(int i=0;i<n;i++) cin>>s[i];
    
    for(int col=0;col<m;col++){
        int floor=n-1;
        while(floor>-1 and s[floor][col]!='.'){
            if(s[floor][col]=='o'){
                floor--;
                break;
            }
            floor--;
        }
        if(floor<0) continue;

        int cur=floor;
        while(cur>-1){
            if(s[cur][col]=='*'){
                swap(s[floor][col],s[cur][col]);
                floor--;
            }
            else if(s[cur][col]=='o') floor=cur-1;
            cur--;
        }    
    }
    for(int i=0;i<n;i++) cout<<s[i]<<endl;
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