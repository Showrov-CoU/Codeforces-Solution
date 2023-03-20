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
    ll p1,p2;
    string x1,x2;
    cin>>x1>>p1>>x2>>p2;
    ll a=stoi(x1);
    ll b=stoi(x2);
    if(x1.length()+p1 > x2.length()+p2) cout<<">"<<endl;
    else if(x1.length()+p1 < x2.length()+p2) cout<<"<"<<endl;
    else{
        bool ok=false;
        bool ok1=false;
        ll n= max(x1.length(),x2.length());
        if(x1.length()<x2.length()) for(int i=x1.length();i<n;i++) x1+='0';
        else if(x1.length()>x2.length()) for(int i=x2.length();i<n;i++) x2+='0';
        
        for(int i=0;i<n;i++){
            if(x1[i]==x2[i]) continue;
            else if(x1[i]>x2[i]){
                ok=true;
                break;
            }
            else if(x1[i]<x2[i]){
                ok1=true;
                break;
            }
        }
        if(ok) cout<<">"<<endl;
        else if(ok1) cout<<"<"<<endl;
        else cout<<"="<<endl;
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