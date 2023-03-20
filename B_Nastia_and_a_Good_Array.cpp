#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
//#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

void solve(){
    int n,a,pos,x=1e9+7;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(a<x){
            x=a;
            pos=i;
        }
    }
    cout<<n-1<<endl;
    for(int i=1;i<=n;i++){
        if(i==pos)continue;
        cout<<i<<" "<<pos<<" "<<x+abs(i-pos)<<" "<<x<<endl;
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

