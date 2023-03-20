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
    int h,w;
    cin>>h>>w;
    int a[h+2][w+2];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++) a[i][j]=0;
    }

    for(int i=0;i<w;i+=2){
        a[0][i]=1;
        a[h-1][i]=1;
    }
    for(int i=2;i<h-2;i+=2){
        a[i][0]=1;
        a[i][w-1]=1;
    }
    
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}

int main() 
{
    FAST
    int t,ca;
    cin>>t;
    while(t--)
    {
        solve();        
    }
    return 0;
}