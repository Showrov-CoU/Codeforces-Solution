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

int n;
int x[5000003],y[5000003],a[200003];
int main(){
    FAST
	cin>>n;
	for(int i=1;i<=n;++i)cin>>a[i];
	for(int i=1;i<=n;++i){
		for(int j=i+1;j<=n;++j){
			int s=a[i]+a[j];
			if(x[s]&&y[s]&&x[s]!=i&&x[s]!=j&&y[s]!=i&&y[s]!=j){
                cout<<"YES"<<endl;
                cout<<i<<" "<<j<<" "<<x[s]<<" "<<y[s]<<endl;
				return 0;
			}
			x[s]=i;y[s]=j;
		}
    }
    cout<<"NO"<<endl;
	return 0;
}