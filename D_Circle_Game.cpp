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
    ll d,k,x=0,y=0;
    cin>>d>>k;
    while(true){
        if(x<=y && ((x+k)*(x+k)+y*y) <= d*d) x+=k;
        else if(x>y && ((y+k)*(y+k)+x*x) <= d*d) y+=k;
        else break;
    }
    if(x==y)cout<<"Utkarsh"<<endl;
    else cout<<"Ashish"<<endl;
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