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
string cr="";
string MEX(int n){
    if(n==0) return "";
    else{
        MEX((n-1)/26);
        cr+=('a'+(n-1)%26);
    }
    return cr;
}

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans="";
    int i=1,ok=0;
    while(1){
        cr="";
        ans=MEX(i);
        int pos=s.find(ans);
        if(pos==-1){
            ok=1;
            break;
        }
        i++;
    }
    if(ok) cout<<ans<<endl;
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