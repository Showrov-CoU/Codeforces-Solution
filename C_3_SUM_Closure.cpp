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
    ll n,i=2;
    cin>>n;
    ll ar[n+2];
    map<ll,int>mp;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        mp[ar[i]]=1;
    }

    ll a=ar[0], b=ar[1], c=ar[2],s;
    s=a+b+c;
    if(mp[s]==1){
        bool ok=false;
        for(int i=3;i<n;i++){
            if(ar[i]==a || ar[i]==b || ar[i]==c) continue;
            else{
                ok=true;
                break;
            }
        }
        if(ok) no;
        else yes;
    }
    else no;
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