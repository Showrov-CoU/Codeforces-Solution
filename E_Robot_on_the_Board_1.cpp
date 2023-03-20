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
    string s;
    cin>>s;
    int r=1,c=1,dx=0,dy=0,maxdx=0,mindx=0,maxdy=0,mindy=0;
    for(char ch:s){
        if(ch=='U') dx--;
        if(ch=='D') dx++;
        if(ch=='L') dy--;
        if(ch=='R') dy++;
    
        maxdx=max(maxdx,dx);
        mindx=min(mindx,dx);
        maxdy=max(maxdy,dy);
        mindy=min(mindy,dy);

        if(maxdx-mindx>=n) break;
        if(maxdy-mindy>=m) break;
        
        r=1-mindx; c=1-mindy;
    }
    cout<<r<<" "<<c<<endl;
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