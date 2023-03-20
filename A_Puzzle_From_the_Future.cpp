#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
//#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define fr(i,n)       for(int i=0;i<n;i++)
#define rfr(i,n)      for(int i=n-1;i>=0;i--)
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

void solve(){
    int n;
    cin>>n;
    string b;
    cin>>b;
    vector<int>a(n);
    vector<int>c(n);
    a.assign(n,1);

    if(b[0]=='1')c[0]=2;
    else c[0]=1;

    for(int i=1;i<n;i++){
        if(b[i]=='1' and c[i-1]==2){
            a[i]=0;
            c[i]=1;
        }
        else if(b[i]=='1' and c[i-1]==1){
            c[i]=2;
        }
        else if(b[i]=='1' and c[i-1]==0){
            c[i]=2;
        }
        else if(b[i]=='0' and c[i-1]==2){
            c[i]=1;
        }
        else if(b[i]=='0' and c[i-1]==1){
            a[i]=0;
            c[i]=0;
        }
        else if(b[i]=='0' and c[i-1]==0){
            c[i]=1;
        }
    }
    for(int &i:a)cout<<i;
    cout<<endl;
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