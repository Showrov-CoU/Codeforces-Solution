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
    ll n,nmbr;
    cin>>n>>nmbr;
    string s=to_string(nmbr),t="";

    bool ok=true;
    for(int i=0;i<n;i++) if(s[i]=='9') ok=false;

    if(ok){
        for(int i=0;i<n;i++){
            t+=('9'-s[i])+'0';
        }
        cout<<t<<endl;
    }
    else{
        if(s[n-1]=='9') t+='2';
        else{
            if(s[i]=='1') t+='0';
            else t+=(('9'-s[n-1])+'2');
        }
        char carry='0';
        for(int i=n-2;i>=0;i--){
            if(s[i]=='1') t+='0';
            t+=(('9'-s[i])+'1');
        }
        reverse(t.begin(),t.end());
        cout<<t<<endl;
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