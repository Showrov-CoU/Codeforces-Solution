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

int a[102],b[102];

int solve(){
    int n,u,v;
    cin>>n>>u>>v;
    vector vc;
    map<int,int>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=a[i];
        m[a[i]]++;
    }
    int sz=m.size();
    if(sz==1)cout<<u+v<<endl;
    else{
        sort(b+1,b+n,greater<int>());
        for(int i=1;i<=n;i++)cout<<b[i]<<" ";
        // bool ok=false;
        // for(int i=1;i<=n;i++){
        //     b[i]=b[i]-b[i-1];
        //     if(b[i]>=2){ok=true;cout<<b[i]<<endl;break;}
        // }
        // if(ok){cout<<0<<endl;return 0;}
        // else if(!ok && sz==n) cout<<min(u,v)<<endl;
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