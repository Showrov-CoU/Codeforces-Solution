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

ll n;

ll call(ll a[],ll b[])
{
    ll result=0;
    vector<pair<ll,ll>>p1,p2;
    for(int i=0;i<n;i++) p1.push_back({a[i],i});
    for(int i=0;i<n;i++) p2.push_back({b[i],i});
    sort(p1.begin(),p1.end());
    sort(p2.begin(),p2.end());
    for(int i=0;i<n;i++){
        result+=abs(p1[i].second - p2[i].second);
    }
    return result/2;
}

void solve(){
    cin>>n;
    ll a[n+2],b[n+2],c[n+2];
    for(int i=0;i<n;i++) cin>>a[i];
    
    vector<ll> even,odd;
    for(int i=0;i<n;i++){
        if(a[i]%2==0) even.push_back(a[i]);
        else odd.push_back(a[i]);
    }

    ll x=even.size();
    ll y=odd.size();

    if(abs(x-y)>1){
        cout<<-1<<endl;
        return;
    }
    
    ll ans=1e10;
    if(x==y){
        int indx=0;
        for(int i=0;i<x;i++){
            b[indx]=odd[i],indx++;
            b[indx]=even[i],indx++;
        }
        ans=min(ans,call(a,b)); 
        indx=0;
        for(int i=0;i<x;i++){
            c[indx]=even[i],indx++;
            c[indx]=odd[i],indx++;
        }
        ans=min(ans,call(a,c));
        cout<<ans<<endl;
        return;
    }
    else{
        if(x>y){
            int indx=0;
            for(int i=0;i<y;i++){
                b[indx]=even[i],indx++;
                b[indx]=odd[i],indx++;
            }
            b[indx]=even[x-1];
        }
        else{
            int indx=0;
            for(int i=0;i<x;i++){
                b[indx]=odd[i],indx++;
                b[indx]=even[i],indx++;
            }
            b[indx]=odd[y-1];
        }
        ans=min(ans,call(a,b));
        cout<<ans<<endl;
        return;
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