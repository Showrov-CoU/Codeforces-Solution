#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define loop(i,n)     for(int i=0;i<n;i++)
#define rloop(i,n)    for(int i=n-1;i>=0;i--)
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

int main() 
{
    FAST
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+2];
        set<ll>s;
        map<ll,vector>mp;
        for(ll i=1;i<=n;i++){
            cin>>a[i];
            s.insert(a[i]);
            mp[a[i]].push_back(i);
        } 
        int ok=1;
        for(ll x:s)
        {
            vector v=mp[x];
            if(v.size()==1){ok=0;cout<<v[0]<<endl;break;}
        } 
        if(ok) cout<<-1<<endl;    
    }

    return 0;
}