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
#define vector        vector<string>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update > pbds;

void solve(){
    ll n;
    cin>>n;
    map<char,ll>fc;
    map<char,ll>sc;
    map<string,ll>ts;
    vector s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
        ts[s[i]]++;
        fc[s[i][0]]++;
        sc[s[i][1]]++;
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        ll x=fc[s[i][0]]-ts[s[i]];
        ans+=x;
        x=sc[s[i][1]]-ts[s[i]];
        ans+=x;
        if(fc[s[i][0]]>0) fc[s[i][0]]--;
        if(sc[s[i][1]]>0) sc[s[i][1]]--;
        if(ts[s[i]]>0) ts[s[i]]--;
    }
    cout<<ans<<endl;
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