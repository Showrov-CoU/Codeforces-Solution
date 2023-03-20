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
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='1' || s[i]=='4' || s[i]=='6' || s[i]=='8' || s[i]=='9'){
            cout<<1<<endl;
            cout<<s[i]<<endl;
            return;
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]=='2'){
            for(int j=i+1;j<n;j++){
                if(s[j]=='2' || s[j]=='5' || s[j]=='7'){
                    cout<<2<<endl;
                    cout<<s[i]<<s[j]<<endl;
                    return;
                }
            }
        }
        else if(s[i]=='3'){
            for(int j=i+1;j<n;j++){
                if(s[j]=='2' || s[j]=='3' || s[j]=='5'){
                    cout<<2<<endl;
                    cout<<s[i]<<s[j]<<endl;
                    return;
                }
            }
        }
        else if(s[i]=='5'){
            for(int j=i+1;j<n;j++){
                if(s[j]=='2' || s[j]=='5' || s[j]=='7'){
                    cout<<2<<endl;
                    cout<<s[i]<<s[j]<<endl;
                    return;
                }
            }
        }
        else if(s[i]=='7'){
            for(int j=i+1;j<n;j++){
                if(s[j]=='2' || s[j]=='5' || s[j]=='7'){
                    cout<<2<<endl;
                    cout<<s[i]<<s[j]<<endl;
                    return;
                }
            }
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