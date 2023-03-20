#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define yes           cout<<"YES"<<endl
#define no            cout<<"NO"<<endl
#define fix(x)        cout<<fixed<<setprecision(x)
#define MOD           1e9+7
#define endl          ("\n")
//#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n+3];
    for(int i=1;i<=n;i++) cin>>a[i];
    
    if(a[n]==0){
        for(int i=1;i<=(n+1);i++) cout<<i<<" ";
        cout<<endl;
        return;
    }
    else if(a[1]==1){
        cout<<n+1<<" ";
        for(int i=1;i<=n;i++) cout<<i<<" ";
        cout<<endl;
        return;
    }
    int x=-1;
    for(int i=1;i<n;i++){
        if(a[i]==0 && a[i+1]==1) x=i+1;
    }
    if(x<0) cout<<-1<<endl;
    else{
        for(int i=1;i<x;i++) cout<<i<<" ";
        cout<<n+1<<endl;
        for(int i=x;i<=n;i++) cout<<i<<" ";
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