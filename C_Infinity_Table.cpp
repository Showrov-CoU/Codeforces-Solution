#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define yes           cout<<"YES"<<endl
#define no            cout<<"NO"<<endl
#define fix(x)        cout<<fixed<<setprecision(x)
#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

void solve(){
    ll n,x,y,v,c;
    cin>>n;
    x=sqrt(n);
    y=x;
    if(x*x == n){
        cout<<x<<" "<<1<<endl;
        return;
    }
    else{
        x++,y++;
        //cout<<x<<" "<<y<<endl;
        v=x*y;
        c=x-1;
        if(v-n <= c) cout<<x<<" "<<v-n+1<<endl;
        else{
            ll nv=(x-1)*(x-1) + 1;
            ll nc=n-nv;
            cout<<nc+1<<" "<<x<<endl;
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