#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define fr(i,n)       for(int i=0;i<n;i++)
#define revfr(i,n)    for(int i=n-1;i>=0;i--)
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

void solve(){
    ll n,even=0,odd=0;
    cin>>n;
    vector a(n);
    fr(i,n) {
        cin>>a[i];
        if(i%2) odd+=a[i];
        else even+=a[i];
    }
    if(even>=odd){
        fr(i,n)if(i%2)a[i]=1;
    }
    else{
        fr(i,n)if(i%2==0)a[i]=1;
    }
    fr(i,n)cout<<a[i]<<" ";
}

int main() 
{
    FAST
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;       
    }
    return 0;
}