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
bool cmp(int a,int b)
{
    return a>b;
}
int main() 
{
	FAST
	int t;
	cin>>t;
	while(t--)
    {
        int n,x,c=0;
        cin>>n>>x;
        int a[n+1],b[n+1];
        loop(i,n)cin>>a[i];
        loop(i,n)cin>>b[i];
        sort(b,b+n,cmp); 
        loop(i,n) if(a[i]+b[i] > x){c=1;break;}
        if(c)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
	return 0;
}