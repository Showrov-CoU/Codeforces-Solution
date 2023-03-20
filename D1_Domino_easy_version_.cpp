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
    ll n,m,k,d;
    cin>>n>>m>>k;
    if(n%2==0 && m%2==0){
        if(k%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else if(n%2 && m%2==0){
        if(k < m/2) cout<<"NO"<<endl;
        else{
            k=k-m/2;
            if(k%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    else{
        if(k <= (n*m/2 - n/2) && k%2==0) cout<<"YES"<<endl;
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