#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define loop(i,n)      for(ll i=0;i<n;i++)
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

int main() 
{
	FAST
	int t;
	cin>>t;
	while(t--)
    {
        ll n,j=0;
        cin>>n;
        ll a[n+1];
        ll mn=0;
        loop(i,n) cin>>a[i];
        loop(i,n) if(a[i]>=mn){
            mn=a[i];
            j=i;
        }
        if(j != n-1) cout<<j+1<<endl;
        else{
            ll c=0;
            for(int i=j;i>=1;i--){
                if(a[i]==a[i-1])continue;
                else{
                    c=i;
                    break;
                } 
            }
            if(c)cout<<c+1<<endl;
            else cout<<-1<<endl;
        }
    }
	return 0;
}