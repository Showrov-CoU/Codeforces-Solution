#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define endl          ("\n")
#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

const int N=2e5+2;
int dp[N][2];
ll n;
string s;

ll func(int nxtid,int predig){
    if(nxtid==n)return 0;
    if(dp[nxtid][predig]!=-1) return dp[nxtid][predig];

    ll ret=0;
    if(s[nxtid]=='?'){
        if(predig==0) ret+=(1+func(nxtid+1,1));
        else ret+=(1+func(nxtid+1,0));
    }
    else{
        if((s[nxtid]-'0')==predig)return 0;
        else ret+=(1+func(nxtid+1,s[nxtid]-'0'));
    }
    return dp[nxtid][predig]=ret;
}

void solve(){
    cin>>s;
    ll ans=0;
    n=s.size();
    for(int i=0;i<n;i++) {
        dp[i][0]=dp[i][1]=-1;
    }
    for(int i=0;i<n;i++){
        if(s[i]=='?'){
           ll mx=1+func(i+1,0);
           mx=max(mx,1+func(i+1,1));
           ans+=mx;
        }
        else ans+=1+func(i+1,s[i]-'0');
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