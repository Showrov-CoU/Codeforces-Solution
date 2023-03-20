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

int ar[300005],indx[300005];

void solve(){
    int n,a,b,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>ar[i];
        indx[ar[i]]=i;
    }
    for(int i=2;i<=2*n;i++){
        for(int x=1;x*x<=i;x++){
            if(i%x==0){
                a=x;
                b=i/x;
                if(a==b)continue;
                if(indx[a] and indx[b] and (indx[a]+indx[b])==i) ans++;
            }
        }
    }
    cout<<ans<<endl;
    for(int i=1;i<=2*n;i++)indx[i]=0;
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