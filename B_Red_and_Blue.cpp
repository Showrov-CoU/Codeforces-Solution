#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<int>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define fr(i,n)       for(int i=0;i<n;i++)
#define rfr(i,n)      for(int i=n-1;i>=0;i--)
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

void solve(){
    int n,m;
    cin>>n;
    vector r(n);
    for(int &i:r)cin>>i;
    cin>>m;
    vector b(m);
    for(int &i:b)cin>>i;
    partial_sum(r.begin(), r.end(), r.begin());
    partial_sum(b.begin(), b.end(), b.begin());
    int ans=max(0,*max_element(r.begin(),r.end())) 
            + max(0,*max_element(b.begin(),b.end()));
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