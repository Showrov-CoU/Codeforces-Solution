#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define loop(i,n)      for(int i=0;i<n;i++)
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

int main() 
{
	FAST
	ull ans=1;
    int n,m;
    cin>>n;
    m=n/2;
    for(int i=n;i>=2;i--)ans*=i;
    cout<<ans/(n*m)<<endl;
	return 0;
}