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
    int n;
    cin>>n;
    if(n==1) cout<<"a"<<endl;
    else{
        if(n%2==0){
            for(int i=0;i<n/2;i++) cout<<"a";
            cout<<"b";
            for(int i=0;i<n/2 - 1;i++) cout<<"a";
            cout<<endl;
        }
        else{
            n=n-1;
            for(int i=0;i<n/2;i++) cout<<"a";
            cout<<"b";
            for(int i=0;i<n/2 - 1;i++) cout<<"a";
            cout<<"c"<<endl;
        }
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