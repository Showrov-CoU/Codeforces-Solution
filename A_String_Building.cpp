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
    string s;
    cin>>s;
    int n=s.size();
    if(n==1){
        no;
        return;
    }
    bool possible;
    vector v;
    for(int i=0;i<n; ){
        int cnt=0,cntb=0;
        if(s[i]=='a'){
            while(s[i]=='a'){
                cnt++;
                i++;
            }
            v.push_back(cnt);
            // if(cnt%5==0 || cnt%3==0 || cnt%2==0){
            //     possible=true;
            // }
            // else{
            //     possible=false;
            //     break;
            // }
            
        }
        else if(s[i]=='b'){
            while(s[i]=='b'){
                cntb++;
                i++;
            }
            v.push_back(cntb);
            // if(cntb%5==0 || cntb%3==0 || cntb%2==0){
            //     possible=true;
            // }
            // else{
            //     possible=false;
            //     break;
            // }
        }
    }
    bool ok=true;
    for(int i=0;i<v.size();i++){
        if(v[i]>=2) continue;
        else{
            ok=false;
            break;
        }
    }
    if(ok) yes;
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