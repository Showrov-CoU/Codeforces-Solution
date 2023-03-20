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
    int n,j=1,sum=0,ans=0,mn=INT_MAX;
    cin>>n;
    int a[n];
    for(auto& i:a){
        cin>>i;
        sum+=i;
        mn=min(mn,i);
    }
    if((sum/n)==a[0]){
        cout<<n<<endl;
        for(int i=1;i<=n;i++)cout<<i<<" ";
        cout<<endl;
    }
    else{
        for(auto i:a) if(i>mn) ans++;
        cout<<ans<<endl;
        for(auto i:a){
        if(i>mn){
            cout<<j<<" ";
            j++;
        }
        else j++;
    }
      cout<<endl;
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