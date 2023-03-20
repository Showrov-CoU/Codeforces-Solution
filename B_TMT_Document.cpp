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
    ll n,t=0,m=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='T')t++;
        else m++;
    }
    if(s[0]=='M' || s.back()=='M' || t != 2*m) cout<<"NO"<<endl;
    else{
        int c=0; bool ok=false;
        for(int i=0;i<n;i++){
            if(s[i]=='T')c++;
            else c--;
            if(c<0){ok=true;break;}
        }
        c=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='T')c++;
            else c--;
            if(c<0){ok=true;break;}
        }
        if(ok)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;  
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