#include<bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define fr(i,n)       for(int i=0;i<n;i++)
#define rfr(i,n)      for(int i=n-1;i>=0;i--)
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

void solve(){
    ll a,b,k;
    cin>>a>>b>>k;
    vector A(k),B(k);
    map<int,int>ma,mb;
    for(int i=0;i<k;i++){
        cin>>A[i];
        ma[A[i]]++;
    }
    for(int i=0;i<k;i++){
        cin>>B[i];
        mb[B[i]]++;
    }
    ll ans=0;
    for(int i=0;i<k;i++){
        ans+=(k-ma[A[i]]-mb[B[i]]+1);
    }
    cout<<ans/2<<endl;
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