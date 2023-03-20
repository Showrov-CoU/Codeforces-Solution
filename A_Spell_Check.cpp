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
    int n,t=0,i=0,m=0,u=0,r=0;
    cin>>n;
    string s;
    cin>>s;
    
    for(int j=0;j<n;j++){
        if(s[j]=='T') t++;
        else if(s[j]=='i') i++;
        else if(s[j]=='m') m++;
        else if(s[j]=='u') u++;
        else if(s[j]=='r') r++;
    }
    if(n==5 and t==1 and i==1 and m==1 and u==1 and r==1) yes;
    else no;
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