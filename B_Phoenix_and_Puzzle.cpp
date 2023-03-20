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
    int n,p;
    cin>>n;
    if(n<4){
        if(n==2){cout<<"YES"<<endl;return;}
        else {cout<<"NO"<<endl;return;}
    }
    int m=n/2;
    int x=sqrt(n);
    int y=sqrt(m);
    if(n%2==0 && x*x == n){
        if(x%2==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else if(n%2==0 && y*y==m) cout<<"YES"<<endl;
    else cout<<"NO"<<endl; 
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