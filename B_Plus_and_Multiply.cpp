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
    ll n,a,b;
    cin>>n>>a>>b;
    if(n==1 || b==1 || n%b==1) cout<<"YES"<<endl;
    else if(a==1){
        if(n%b==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else{
        bool ok=false;
        int i=0;
        while(pow(a,i)<=n){
            ll z=n-pow(a,i);
            if(z%b==0){
                ok=true;
                break;
            }
            i++;
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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