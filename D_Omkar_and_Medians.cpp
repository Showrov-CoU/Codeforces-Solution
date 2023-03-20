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
    ll n,x,mx=1e18,mn=-1e18;
    cin>>n;
    set<ll>s;
    pbds p;
    cin>>x;
    s.insert(x);
    p.insert(x);
    bool ok=false;

    for(int i=1;i<n;i++){
        cin>>x;
        ll sz=p.size();
        ll median = *p.find_by_order(sz/2);
        if(x>median){
            if(s.count(x)){
                p.insert(mx--);
                p.insert(mx--);
            }
            else{
                s.insert(x);
                p.insert(mx--);
                p.insert(x);
            }
        }
        else if(x<median){
            if(s.count(x)){
                p.insert(mn++);
                p.insert(mn++);    
            }
            else{
                s.insert(x);
                p.insert(x);
                p.insert(mn++);
            }
        }
        else{
            p.insert(mx--);
            p.insert(mn++);
        }

        ll newSize=p.size();
        ll newMedian = *p.find_by_order(newSize/2);
        if(newMedian != x) ok=true;
    }
    
    if(ok) no;
    else yes;
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