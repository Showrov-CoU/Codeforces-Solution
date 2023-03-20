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
    ll w,h,k,mxx=LLONG_MIN,mxy=LLONG_MIN;
    cin>>w>>h;
    for(int i=0;i<2;i++){
        cin>>k;
        vector v(k);
        for(int i=0;i<k;i++){
            cin>>v[i];
        }
        mxx=max(mxx,abs(v[0]-v[k-1]));
        v.clear();
    }
    for(int i=0;i<2;i++){
        cin>>k;
        vector v(k);
        for(int i=0;i<k;i++){
            cin>>v[i];
        }
        mxy=max(mxy,abs(v[0]-v[k-1]));
        v.clear();
    }
    cout<<max(mxx*h,mxy*w)<<endl;
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