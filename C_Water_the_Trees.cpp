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

ll call(vector a,ll n,ll mx){
    ll even=0,odd=0,sum=0;
    for(int i=0;i<n;i++){
        sum+=(mx-a[i]);
        even+=((mx-a[i])/2);
        odd+=((mx-a[i])%2);
    }
    ll ans=sum/3 *2;
    ans+=sum%3;
    return max(odd*2-1,ans);
}

void solve(){
    ll n;
    cin>>n;
    vector ar(n);
    for(int i=0;i<n;i++) cin>>ar[i];
    ll mxx=*max_element(ar.begin(),ar.end());
    ll res=min(call(ar,n,mxx),call(ar,n,mxx+1));
    cout<<res<<endl;
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