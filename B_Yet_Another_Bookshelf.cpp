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
        int n,l,r;
        cin>>n;
        bool a[n+1];
        loop(i,n) cin>>a[i];
        loop(i,n){
            if(a[i]==1){
                l=i;
               for(int j=l;j<n;j++){
                    if(a[j]==1) r=j;
                    else if(j == n-1)break;
               }
               break;
            }
        }
        int cnt=0;
        for(int i=l;i<=r;i++) if(a[i]==0)cnt++;
        cout<<cnt<<endl;
    }
	return 0;
}