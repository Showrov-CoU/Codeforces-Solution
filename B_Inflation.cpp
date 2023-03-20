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

    ll n,k;
            cin>>n>>k;
            vector a(n);
            ll sum=0;
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            ll l=0,r=1e14;
            while(l<r){
                ll mid=(l+r)/2;
                ll sum=a[0]+mid;
                bool ok=true;
                for(int i=1;i<n;i++){
                    ll x=sum*k/100;
                    if(a[i]>x){
                        ok=false;
                        break;
                    }
                    sum+=a[i];
                }
                if(ok) r=mid;
                else l=mid+1;
            }
            cout<<l<<"\n";
    
    // long long int n,k,i,sum=0,x,y,z,mx=0;
    // cin >> n >> k;
    // vector vec,psum;

    // for(i=0;i<n;i++)
    // {
    //     cin >> x;
    //     vec.push_back(x);
    //     sum+=x;
    //     psum.push_back(sum);
    // }

    // for(i=1;i<n;i++)
    // {
    //     x=(((vec[i]*100)-(k*psum[i-1]))+k-1)/k;
    //     mx=max(mx,x);
    // }

    // cout << mx << endl;

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