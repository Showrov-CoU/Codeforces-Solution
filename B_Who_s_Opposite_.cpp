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
    int a,b,c,d;
    cin>>a>>b>>c;
    if(a>b) swap(a,b);
    int highestnmbr=(b-a)*2;
    if(a>highestnmbr || b>highestnmbr || c>highestnmbr) cout<<-1<<endl;
    else if(c<=(b-a)) cout<<c+(b-a)<<endl;
    else cout<<c-(b-a)<<endl;
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