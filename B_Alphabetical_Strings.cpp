#include<bits/stdc++.h>

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

void solve()
{
   string s;
   cin>>s;
   string ans="YES";
   int n=s.length();
   int a,b;
   a=0,b=n-1;
   for(int i=n-1;i>=0;i--){
       if(s[a]==i+97){
           a++;
           continue;
       }
       else if(s[b]==i+97){
           b--;
           continue;
       }
       else{
           ans="NO";
           break;
       }
       if(a>b) break;
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