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
    ll n,ans=0;
    cin>>n;
    string s,t;
    cin>>s>>t;
    int i=1,j=1;
    
    for(int x=1;x<=1;x++){
        if(t[0]=='1'){
            if(s[0]=='0'){
                ans++,s[0]='2';
                break;
            }
            if(s[1]=='1')ans++,s[j]='2';
        }
    }

    for(i=1;i<n;i++){
        if(t[i]=='1'){
            if(s[i]=='0') ans++,s[i]='2';
            else if(s[i-1]=='1')ans++,s[i-1]='2';
            else{
                if(i+1 <= n-1){
                    if(s[i+1]=='1')ans++,s[i+1]='2';
                
                }
            }
        }
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