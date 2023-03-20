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
    ll a,b,one=0,zero=0;
    cin>>a>>b;
    string s;
    cin>>s;
    int l=s.find('1');
    int r=s.rfind('1');
    if(l==r && l == -1){
        cout<<0<<endl;
        return;
    }
    int ans=a;
    for(int i=l;i<=r;i++){
        int c=0;
        while(s[i]=='0'){
            c++;
            i++;
        }
        ans+=min(a,c*b);
    }
    cout<<ans<<endl;
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