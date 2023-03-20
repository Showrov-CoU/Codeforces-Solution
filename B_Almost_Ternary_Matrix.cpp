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
    int n,m;
    cin>>n>>m;
    
    if(n%3==2 and n%4!=0)
    for(int i=1;i<=n;i++){
        int ccnt=1;
        for(int j=1;j<=m;j+=2){
            string s="";
            if(i%3==1){
                if(ccnt%2){
                    s+="1 "; s+="0 ";
                    cout<<s;
                    ccnt++; s.clear();
                }
                else{
                    s+="0 "; s+="1 ";
                    cout<<s;
                    ccnt++; s.clear();
                }
            }
            else if(i%3==2 ){
                if(ccnt%2){
                    s+="0 "; s+="1 ";
                    cout<<s;
                    ccnt++; s.clear();
                }
                else{
                    s+="1 "; s+="0 ";
                    cout<<s;
                    ccnt++; s.clear();
                }
            }
        }
        cout<<endl;
    }
    cout<<endl;
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