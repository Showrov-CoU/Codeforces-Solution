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
    vector<pair<int,int>>v;
    for(int i=1;i<=3;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    if(v[0].first==v[1].first and v[1].first==v[2].first){
        int mn=min(v[0].second,v[1].second);
        int mx=max(v[0].second,v[1].second);
        if(v[2].second>= mn  and  v[2].second<=mx) cout<<mx-mn+2<<endl;
        else cout<<mx-mn<<endl;
    }
    else if(v[0].second==v[1].second and v[1].second==v[2].second){
        int mn=min(v[0].first,v[1].first);
        int mx=max(v[0].first,v[1].first);
        if(v[2].first>= mn  and  v[2].first<=mx) cout<<mx-mn+2<<endl;
        else cout<<mx-mn<<endl;
    }
    else cout<<abs(v[0].first-v[1].first) + abs(v[0].second-v[1].second)<<endl;
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