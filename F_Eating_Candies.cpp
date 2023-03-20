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
    ll a[n+1];
    for(int i=0;i<n;i++) cin>>a[i];
    
    ll suml=a[0],sumr=a[n-1],i=0,j=n-1,ans=0,cnt=2;

    while(i<j){
        if(suml==sumr){
            ans=cnt;
            i++; j--;
            suml+=a[i]; sumr+=a[j];
            cnt+=2;
        }
        else if(suml<sumr){
            i++;
            suml+=a[i];
            cnt++;
        }
        else if(suml>sumr){
            j--;
            sumr+=a[j];
            cnt++;
        }
    }
    cout<<ans<<endl;
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