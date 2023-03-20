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
ll a[300005];
void solve()
{
   ll n,l,r,low,high,mid,ans=0;
   cin>>n>>l>>r;
   for(ll i=0;i<n;i++) cin>>a[i];
   sort(a,a+n);
   for(ll i=0; i<n-1; i++)
   {
       ll x=i,y=i;
       low=i+1, high=n-1;
       while(low<=high){
           mid=(low+high)/2;
           if(a[mid]+a[i]>=l){
               x=mid;
               high=mid-1;
           }
           else low=mid+1;
       } 
       //cout<<x<<" ";
    
       low=i+1, high=n-1;
       while(low<=high){
           mid=(low+high)/2;
           if(a[mid]+a[i]<=r){
               y=mid;
               low=mid+1;
           }
           else high=mid-1;
       }
       //cout<<y<<endl;
        if(a[x]+a[i]>=l and a[y]+a[i]<=r) 
            ans+=y-x+1;
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