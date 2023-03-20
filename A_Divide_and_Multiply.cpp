#include <bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define yes           cout<<"YES"<<endl
#define no            cout<<"NO"<<endl
#define fix(x)        cout<<fixed<<setprecision(x)
#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update > pbds;


void solve(){
    ll n,x=-1,sum=0,sum2=0,cnt=0;
    cin>>n;
    ll a[n+2];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);

    for(int i=n-2;i>=0;i--){
        if(a[i]%2==0){
            ll div=a[i];
            while(true){
                if(div%2==0){
                    div/=2;
                    cnt++;
                }
                else break;
            }
            while(cnt--){
                a[n-1]=a[n-1]*2;
            }
            cnt=0;
            a[i]=div;
        }
    }
    for(int i=0;i<n;i++) sum+=a[i];
    sort(a,a+n);
    ll dv=a[n-1];
    ll id=n-1;
    for(int i=n-2;i>=0;i--){
        if(a[i]%2==1 && a[i]!=1){
            while(true){
                if(dv%2==0){
                    dv/=2;
                    cnt++;
                }
                else break;
            }
            while(cnt--){
                a[i]=a[i]*2;
            }
            cnt=0;
            a[id]=dv;
            for(int i=0;i<n;i++) sum2+=a[i];
        }
        // sum=max(sum,sum2);
        // sum2=0;
        // dv=a[i];
        // id=i;
        break;
    }
    cout<<max(sum,sum2)<<endl;
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