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
    ll n,odd=0,even=0;
    cin>>n;
    int a[n+2];
    vector ans;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2)odd++;
        else even++;
    }
    if(odd>even){
       for(int i=0;i<n;i++){
           if(a[i]%2)ans.push_back(a[i]);
       }
       for(int i=0;i<n;i++){
           if(a[i]%2==0)ans.push_back(a[i]);
       }
    }
    else{
        for(int i=0;i<n;i++){
           if(a[i]%2==0)ans.push_back(a[i]);
       }
       for(int i=0;i<n;i++){
           if(a[i]%2)ans.push_back(a[i]);
       }
    }
    for(int i:ans)cout<<i<<" ";
    cout<<endl;
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