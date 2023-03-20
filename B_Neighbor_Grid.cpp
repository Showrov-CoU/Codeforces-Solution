#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define fr(i,n)       for(int i=1;i<=n;i++)
#define revfr(i,n)    for(int i=n-1;i>=0;i--)
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

void solve(){
    ll n,m;
    cin>>n>>m;
    ll a[n+1][m+1];
    bool ok=false;
    fr(i,n){
        fr(j,m){
            cin>>a[i][j];
            if((i==1 and j==1)or(i==1 and j==m)or(i==n and j==1)or(i==n and j==m)){
                ll val=a[i][j];
                a[i][j]=2;
                if(val>a[i][j]) ok=true;
            }
            else if(i==1 or j==1 or i==n or j==m){
                ll val=a[i][j];
                a[i][j]=3;
                if(val>a[i][j]) ok=true; 
            }   
            else{
                ll val=a[i][j];
                a[i][j]=4;
                if(val>a[i][j]) ok=true;
            }
        }
    }
    if(!ok){
        cout<<"YES"<<endl;
        fr(i,n){
            fr(j,m){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
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