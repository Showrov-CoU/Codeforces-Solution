#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define fr(i,n)       for(int i=0;i<n;i++)
#define rfr(i,n)      for(int i=n-1;i>=0;i--)
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

void solve(){
    string s,t,r,ans1,ans2;
    cin>>s>>t;
    int a=s.size();
    int b=t.size();
    int m=lcm(a,b);
    int n1=lcm(a,b)/a;
    int n2=lcm(a,b)/b;
    for(int i=0;i<n1;i++)ans1+=s;
    for(int i=0;i<n2;i++)ans2+=t;
    bool ok=false;
    for(int i=0;i<m;i++){
        if(ans1[i]!=ans2[i]){
            ok=true;
            break;
        }
    }
    if(ok)cout<<-1<<endl;
    else cout<<ans1<<endl;
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