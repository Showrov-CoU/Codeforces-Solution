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

void solve(){
    int n,m,k;
    cin>>n>>k;
    for(int i=1;i<=k;i++)cout<<"a";
    m=n-k;
    if(m%3==0){
        if(m==0) cout<<endl;
        else{
           for(int i=3;i<=m;i+=3) cout<<"cba";
           cout<<endl;
        }
    }
    else if(m%3==1){
        if(m==1){
            cout<<"c";
            cout<<endl;
        }
        else{
            for(int i=3;i<=m;i+=3) cout<<"cba";
            cout<<"c"<<endl;
        }
    }
    else if(m%3==2){
        if(m==2){
            cout<<"cb";
            cout<<endl;
        }
        else{
            for(int i=3;i<=m;i+=3) cout<<"cba";
            cout<<"cb"<<endl; 
        }
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