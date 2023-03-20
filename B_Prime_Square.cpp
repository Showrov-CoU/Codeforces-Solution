#include <bits/stdc++.h>

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

using namespace std;

int prime[300];

void seive(){
    for(int i=0;i<300;i+=2) prime[i]=1;
    prime[1]=1;
    prime[2]=0;
    for(int i=3;i*i<300;i++){
        if(prime[i]==0){
            for(int j=i*i;j<300;j+=i+i) prime[j]=1;
        }
    }
}

void solve(){
    int n,nxtp,x;
    cin>>n;
    for(int i=n;true;i++){
        x=i-(n-1);
        if(prime[i]==0 && prime[x]==1) break;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j) cout<<x<<" ";
            else cout<<1<<" ";
        }
        cout<<endl;
    }
}

int main() 
{
    FAST
    seive();
    int t;
    cin>>t;
    while(t--)
    {
        solve();        
    }
    return 0;
}