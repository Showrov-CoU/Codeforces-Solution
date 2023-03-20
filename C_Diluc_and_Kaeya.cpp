#include <bits/stdc++.h>

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

using namespace std;

void solve(){
    int n,d=0,k=0;
    string s;
    cin>>n>>s;
    map<pair<int,int>,int>mp;
    int ans[n+3];
    for(int i=0;i<n;i++){
        if(s[i]=='D') d++;
        if(s[i]=='K') k++;
        int gc=gcd(d,k);
        mp[{d/gc , k/gc}]++;
        ans[i]=mp[{d/gc , k/gc}];
    }
    for(int i=0;i<n;i++)cout<<ans[i]<<" ";
    cout<<endl;
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