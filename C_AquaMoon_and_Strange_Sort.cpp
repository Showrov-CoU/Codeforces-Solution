#include <bits/stdc++.h>
 
#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
//#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
 
using namespace std;

const int N=1e5+5;
int feven[N],fodd[N];

void solve(){
    int n;
    cin>>n;
    int a[n+2];
    for(int i=0;i<n;i++) cin>>a[i];

    memset(feven,0,sizeof(feven));
    memset(fodd,0,sizeof(fodd));

    for(int i=0;i<n;i++){
        if(i%2) fodd[a[i]]++;
        else feven[a[i]]++;
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(i%2) fodd[a[i]]--;
        else feven[a[i]]--;
    }

    bool ok=true;
    for(int i=1;i<N;i++){
        if(feven[i] || fodd[i]){
            ok=false;
            break;
        }
    }
    
    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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