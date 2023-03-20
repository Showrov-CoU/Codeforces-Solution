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
    string s,t;
    cin>>s>>t;
    int sp=s.size()-1;
    int tp=t.size()-1;
    while(sp>=0 && tp>=0){
        if(s[sp]!=t[tp]) sp-=2;
        else sp--,tp--;
    }
    if(tp<0) cout<<"YES"<<endl;
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