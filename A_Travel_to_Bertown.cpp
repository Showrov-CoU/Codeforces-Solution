#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
//#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

void solve(){
    int n,k,a,b,ans=0;
    cin>>n>>k;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    for(int i=0;i<v.size();i++){
        if(k>=v[i].first) ans=max(ans,((v[i].second-k)+1));
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