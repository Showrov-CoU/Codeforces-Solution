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
    vector a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    sort(a.begin(),a.end());
    ll ls=a[0]+a[1];
    ll rs=a[n-1];

    if(rs>ls) yes;
    else{
        bool ok=false;
        int l=2,r=n-2;
        while(l<r){
            ls+=a[l];
            rs+=a[r];
            if(rs>ls){
                ok=true;
                break;
            }
            l++;
            r--;
        }
        if(ok) yes;
        else no;
    }
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