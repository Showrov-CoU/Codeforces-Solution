#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define fr(i,n)       for(int i=0;i<n;i++)
#define revfr(i,n)    for(int i=n-1;i>=0;i--)
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

void solve(){
    ll w,h,n,c=0,c2=0;
    cin>>w>>h>>n;
    if(w%2 and h%2 and n==1) cout<<"YES"<<endl;
    else if(w%2==0 or h%2==0){
        if(w%2==0){
            while(w%2==0){w/=2;c++;}
        }
        if(h%2==0){
            while(h%2==0){h/=2;c2++;}
        } 
        ll tn = (pow(2,c) * pow(2,c2));
        if(tn >= n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl; 
    }
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