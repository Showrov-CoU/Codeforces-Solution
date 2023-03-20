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
    ll n,x,c=0,ok=1;
    cin>>n;
    vector a;
    vector dp;
    fr(i,n){cin>>x;
        a.push_back(x);
    }
    a.push_back(a.back());
    int s=a.size();
    for(int i=1;i<s-1;i++){
        if(a[i]>a[i-1] and a[i]>a[i+1]){
            c++; 
        }
        else if(a[i]<a[i-1] and a[i]<a[i+1]){
            c++;   
        }
        else{
            if(c==0) continue;
            else{
                dp.push_back(c);
                c=0;
            }
        }
    }
    int sz=dp.size();
    if(dp.empty() or sz==1) {
        if(dp.empty() or dp[0]<=3) cout<<0<<endl;
        else cout<<(dp[0]-3)<<endl;
    }
    else{
        sort(dp.begin(),dp.end());
        if(dp[sz-1] >=3) dp[sz-1]-=3;
        else dp[sz-1]=0;
        ll total=0;
        fr(i,sz) total+=dp[i];
        cout<<total<<endl;
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