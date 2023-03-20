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
    ll n,k,b,s,val,newval;
    cin>>n>>k>>b>>s;
    vector v;
    
    if(n==1){
        ll d=(s/k);
        if(d==b) cout<<s<<endl;
        else cout<<-1<<endl;
    }
    else{
        val=k*b;
        v.push_back(val);
        newval=s-val;
        int pv=newval/(n-1);
        int rv=newval%(n-1);
        for(int i=1;i<=n-1;i++){
            v.push_back(pv);
        }
        reverse(v.begin(),v.end());
        ll sz=v.size();
        if(sz<rv){ 
           cout<<-1<<endl;
           return;
        }
        for(int i=0;i<rv;i++) v[i]++;
        ll sum=0;
        for(auto i:v){
            sum+=(i/k);
        }
        if(sum!=b) cout<<-1<<endl;
        else{
            for(auto i:v) cout<<i<<" ";
            cout<<endl;
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