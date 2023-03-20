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
    int n,q,cnt=0;
    cin>>n>>q;
    string s,x;
    cin>>s;
    x+=s[0]; x+=s[1]; x+=s[2];
    if(x=="abc") cnt++;
    for(int i=3;i<s.length();i++){
        x.erase(x.begin());
        x+=s[i];
        if(x=="abc") cnt++;
    }
    while(q--){
        int p;
        char c;
        cin>>p>>c;
        p--;
        int st=p-2;
        if(st<0) st=0;
        for(int i=st;i<=p;i++){
            string z;
            z+=s[i]; z+=s[i+1]; z+=s[i+2];
            if(z=="abc") cnt--;
        }
        s[p]=c;
        for(int i=st;i<=p;i++){
            string z;
            z+=s[i]; z+=s[i+1]; z+=s[i+2];
            if(z=="abc") cnt++;
        }
        cout<<cnt<<endl;
    }
}

int main() 
{
    FAST
    // int t;
    // cin>>t;
    // while(t--)
    // {
        solve();        
    // }
    return 0;
}