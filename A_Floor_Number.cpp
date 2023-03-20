#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
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
        ll n,x;
        cin>>n>>x;
        int m=n-2;
        if(n<=2) cout<<1<<endl;
        else if(m%x==0)cout<<(m/x)+1<<endl;
        else cout<<(m/x)+2<<endl;
    }
	return 0;
}