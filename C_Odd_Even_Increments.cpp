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
    ll n,x;
    cin>>n;
    vector a(n),a2(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        a2[i]=a[i];
    }
    int e=0,o=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0)e++;
        else o++;
    }
    if(e==n || o==n){
        yes;
        return;
    }

    for(int i=0;i<n;i++){
        if(i%2==0){
            a[i]+=1;
        }
    }
    bool even=true,odd=true;
    for(int i=0;i<n;i++){
        if(a[i]%2) even=false;
    }
    if(even){
        yes;
        return;
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0) odd=false;
    }
    if(odd){
        yes;
        return;
    }

    for(int i=0;i<n;i++){
        if(i%2){
            a2[i]+=1;
        }
    }
    bool ev=true,od=true;
    for(int i=0;i<n;i++){
        if(a2[i]%2) ev=false;
    }
    if(ev){
        yes;
        return;
    }
    for(int i=0;i<n;i++){
        if(a2[i]%2==0) od=false;
    }
    if(od){
        yes;
        return;
    }
    no;
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