#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;
int a[105];
void solve(){
    int n,x,sum=0;
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum==x) cout<<"NO"<<endl;
    else{
        int s=0;
        cout<<"YES"<<endl;
        int j=2;
        for(int i=1;i<=n;i++){
            s+=a[i];
            if(s==x){
                swap(a[i],a[i+1]);
                break;
            }
        }
        for(int i=1;i<=n;i++)cout<<a[i]<<" ";
        cout<<endl;
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