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
    int n,m,k;
    cin>>n>>m>>k;
    string a,b,c="";
    cin>>a>>b;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    int s=0,ss=0,z=0,z1=0;
    if(a[s]<b[ss])
    cout<<a[s]<<endl;
    while(s!=(n-1) and ss!=(m-1)){
        z=0, z1=0;
            
            if(a[s]<b[ss])
            {while(a[s]<b[ss] && z!=k && s!=(n-1) && ss!=(m-1))
            {
                c+=a[s];
                s++;
                z++;
            }}
            z=0;
            if(b[ss]<a[s]){while(a[s]>b[ss] && z1!=k && ss!=(m-1) && s!=(n-1) )
            {
                c+=b[ss];
                ss++;
                z1++;
            }}
            z1=0;

    }
    cout<<c<<endl;
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