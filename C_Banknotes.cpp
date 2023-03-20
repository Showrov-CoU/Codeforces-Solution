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
//#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update > pbds;

ll a[10]={1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};

void solve(){
    ll n,k,x,sum=0,burl=0;
    cin>>n>>k;
    k++;
    vector<pair<ll,ll>> v(n);
    for(int i=0;i<n;i++){
        cin>>x;
        v[i]={a[x],x};
    }
    for(int i=0;i<n-1;i++){
        v[i].second=(v[i+1].first-v[i].first)/v[i].first;
        sum+=v[i].second;
    }
    if(sum <= k) v[n-1].second=k-sum;
    else v[n-1].second=0;

    for(int i=0;i<n;i++){
        if(k <= v[i].second){
            burl+=v[i].first * k;
            break;
        }
        else{
            burl+=v[i].first * v[i].second;
            k-=v[i].second;
        }
    }
    cout<<burl<<endl;
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