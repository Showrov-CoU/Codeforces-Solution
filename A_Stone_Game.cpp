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
    int n,l,h,low,high,m,p;
    cin>>n;
    int a[n+2],b[n+2];
    for(int i=1;i<=n;i++) { 
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a+1,a+n+1);
    l=a[1] , h=a[n];
    for(int i=1;i<=n;i++){
        if(b[i]==l) m=i;
        if(b[i]==h) p=i;
    }
    low=min(m,p);high=max(m,p);
    cout<<min(high,min(n-low+1,((low-1+1)+(n-high+1))))<<endl;
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