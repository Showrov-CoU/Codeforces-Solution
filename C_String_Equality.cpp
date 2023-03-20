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
    string a,b;
    cin>>n>>k;
    cin>>a>>b;
    int ar[26]={0},br[26]={0};
    for(auto c:a)ar[c-'a']++;
    for(auto c:b)br[c-'a']++;
    bool ok=false;
    for(int i=0;i<26;i++){
        if(ar[i]<br[i]) ok=true;
        else{
            int d=ar[i]-br[i];
            if(d%k!=0) ok=true;
            else ar[i+1]+=d;
        }
    }
    if(ok)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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