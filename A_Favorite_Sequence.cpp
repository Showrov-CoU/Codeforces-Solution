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
        ll n,m,i,j;
        cin>>n;
        m=n/2;
        ll a[n+2];
        for(ll i=0;i<n;i++)cin>>a[i];
        for(ll i=0,j=n-1;i<m;i++){
            cout<<a[i]<<" "<<a[j]<<" ";
            j--;
        } 
        if(n%2)cout<<a[m]<<endl; 
        else cout<<endl;    
    }

    return 0;
}