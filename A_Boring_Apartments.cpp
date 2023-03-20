#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define rep(i,n)      for(int i=0;i<n;i++)
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

int main() 
{
	FAST
	int t;
	cin>>t;
	while(t--)
    {
        int n,ans=0;
        cin>>n;
        string str=to_string(n);
        int s=str.size();
        ans=(((str.at(0)-49)*10)+(s*(s+1))/2);
        cout<<ans<<endl;
    }
	return 0;
}