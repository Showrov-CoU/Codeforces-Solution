#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define fr(i,n)      for(ll i=0;i<n;i++)
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

void solve(){

    ll n,s,mx=0,mn=INT_MAX,sum=0;
    cin>>n;
    ll a[n+1];
    vector v;
    fr(i,n){
        cin>>a[i];
        mx=max(mx,a[i]);
        mn=min(mn,a[i]);
        sum+=a[i];
    }
    if(mx==mn)cout<<0<<endl;
    else{
        for(ll i=1;i<=n;i++) if(sum%i==0)v.push_back(i);
        s=v.size();
        for(ll p=s-1;p>=0;p--){
            ll element=sum/v[p];
            if(mx>element)continue;
            ll sum2=0,cnt=0;
            for(ll i=0;i<n;i++){
                if(a[i]==element){cnt++;sum2=0;continue;}
                else{
                    sum2=sum2+a[i];
                    if(sum2<element)continue;
                    else if(sum2==element){cnt++;sum2=0;continue;}
                    else break;
                }
            }
            if(cnt==v[p]){cout<<n-v[p]<<endl;break;}
        }
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