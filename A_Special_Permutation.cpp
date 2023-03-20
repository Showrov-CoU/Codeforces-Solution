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
        if(n%2){
            for(int i=n;i>(n/2)+1;i--)cout<<i<<" ";
            cout<<1<<" ";
            for(int i=2;i<=(n/2)+1;i++)cout<<i<<" ";
            cout<<endl;
        }
        else{
            for(int i=n;i>=1;i--) cout<<i<<" ";
            cout<<endl;
        }
           
    }

    return 0;
}