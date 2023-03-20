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
    int n,s,sum=0,ans=-1;
    cin>>n>>s;
    int a[n+2];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    for(int i=1;i<n;i++) a[i]+=a[i-1];

    if(s>sum) cout<<-1<<endl;
    else{
        int x=0;
        for(int i=0;i<n;i++){
            int low=i,high=n-1,mid;
            while(low<=high){
                mid=(low+high)/2;
                if((a[mid]-x)==s){
                    int length=mid-i+1;
                    ans=max(ans,length);
                    low=mid+1;
                }
                else if((a[mid]-x)<s) low=mid+1;
                else high=mid-1;
            }
            x=a[i];
        }
        cout<<n-ans<<endl;
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