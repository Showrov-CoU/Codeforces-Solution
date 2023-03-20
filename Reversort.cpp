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

void solve(int ca){
    ll n,i,j,cost=0;
    cin>>n;
    int a[n+1];
    for(i=1;i<=n;i++)cin>>a[i];

    for(i=1;i<n;i++){
        for(j=i;j<n;j++){
            if(a[j]<a[j+1]) break;
        }
        sort(a+i,a+j+1);
        cost+=(j-i+1); 
    }
    cout<<"Case #"<<ca<<": "<<cost<<endl;
}

int main() 
{
    FAST
    int t,ca=1;
    cin>>t;
    while(t--)
    {
        solve(ca);
        ++ca;        
    }
    return 0;
}