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
    ll n;
    cin>>n;
    if(n==1) cout<<1<<endl;
    else if(n>=2 and n<=4) cout<<2<<endl;
    else if(n>=5 and n<=9) cout<<3<<endl;
    else{
        int ans=1;
        int i=3;
        --n;
        while(n!=0){
            n-=i;
            ans++;
            i+=2;
            if((n-i) <= 0 ) {
                ans++;
                break;
            }
        }
        cout<<ans<<endl;
    }

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