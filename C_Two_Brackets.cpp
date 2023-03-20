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
    string s;
    cin>>s;
    int fb=0,tb=0,ans=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(') fb++;
        else if(s[i]==')'){
            if(fb>0){
                fb--;
                ans++;
            }
        }
        if(s[i]=='[') tb++;
        else if(s[i]==']'){
            if(tb>0){
                tb--;
                ans++;
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