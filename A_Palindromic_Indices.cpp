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
    int n,ans=0;
    cin>>n;
    string s;
    cin>>s;
    
    if(n%2){
        int mid=n/2;
        int j=mid+1;
        while(j<n){
            if(s[mid]==s[j]){
                ans++;
                j++;
            }
            else break;
        }
        // int i=(n/2)-1;
        // while(i>0){
        //     if(s[i]==s[mid]){
        //         ans++;
        //         i--;
        //     }
        //     else break;
        // }
        cout<<(2*ans)+1<<endl; 
    }
    else{
        int i=(n/2)-1, j=n/2;
        while(i>=0){
            if(s[i]==s[j]){
                ans++;
                i--;
            }
            else break;
        }

        i=(n/2)-1;
        while(j<n){
            if(s[i]==s[j]){
                ans++;
                j++;
            }
            else break;
        }

        cout<<ans<<endl;
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