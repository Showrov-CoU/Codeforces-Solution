#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

void solve(){
    ll n,x,y,ans=0;
    cin>>n;
    ll a[n+2];
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    if(mp.size()==1)cout<<0<<endl;
    else{
        auto it=mp.begin();
        x=it->first;
        it++;
        y=it->first;
        int avg=(x+y)/2;
        for(auto e:mp){
            if(e.first>avg)ans+=e.second;
        }
        cout<<ans<<endl;
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