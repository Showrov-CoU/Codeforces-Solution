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
#define vector        vector<bitset<18>>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update > pbds;

void solve(){
    int l,r,v;  cin>>l>>r;

    vector g(r+1),t(r+1);

    for(int i=0;i<=r;i++) {
        cin>>v;
        bitset<18> a(v); g[i]=a;
        bitset<18> b(i); t[i]=b;
    }
    bitset<18>ans(0);
    for(int bit=0;bit<18;bit++){
        int gbit=0;
        for(int i=0;i<=r;i++) gbit+=g[i][bit];
        int tbit=0;
        for(int i=0;i<=r;i++) tbit+=t[i][bit];

        if(gbit!=tbit) ans[bit]=1;
    }
    ll res=ans.to_ulong();
    cout<<res<<endl;
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