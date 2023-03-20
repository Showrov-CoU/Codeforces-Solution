#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define loop(i,n)     for(int i=0;i<n;i++)
#define rloop(i,n)    for(int i=n-1;i>=0;i--)
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

int main() 
{
    FAST
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,d,c=0;
        cin>>n>>k;
        ll a[n+1],b[n+1];
        vector v;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            d=a[i]%k;
            a[i]=k-d;
            if(d==0)c++;
            else v.push_back(a[i]);
        }
        if(c==n)cout<<0<<endl;
        else{
            sort(v.begin(),v.end());
            b[0]=v[0];
            ll ans=-1;
            ans=max(ans,b[0]);
            for(ll i=1;i<v.size();i++)
            {
                if(v[i]==v[i-1]){
                    b[i]=b[i-1]+k;
                    ans=max(ans,b[i]);
                }
                else{
                    b[i]=v[i];
                    ans=max(ans,b[i]);
                }
            }
            cout<<ans+1<<endl;
            v.clear();
        }
    }

    return 0;
}