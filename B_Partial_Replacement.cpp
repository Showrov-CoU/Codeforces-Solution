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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int ans=0;
    if(n==1){
        if(s[0]=='*')cout<<1<<endl;
        else cout<<0<<endl;
        return;
    }
    // int x=s.find("*");
    // s[x]='X';
    // ans++;
    // int y=s.rfind("*");
    // s[y]='X';
    // ans++;
    for(int i=0;i<n;i++){
        if(s[i]=='*'){
            s[i]='X';
            ans++;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='*'){
            s[i]='X';
            ans++;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]=='.')continue;
        if(s[i]=='X'){
            bool flag=false;
            for(int j=1;j<=k;j++){
                if(i+j<n && s[i+j]=='X'){
                    flag=true;
                    break;
                }
                else if(i+j>=n){
                    flag=true;
                    break;
                }
            }
            if(flag==false){
                for(int j=i+k;j>i;j--){
                    if(j<n && s[j]=='*'){
                        s[j]='X';
                        ans++;
                        break;
                    }
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