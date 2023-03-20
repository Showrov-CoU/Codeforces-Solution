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
    ll n;
    cin>>n;
    char ch[n+2][n+2];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>ch[i][j];
        }
    }
    vector v;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(ch[i][j]=='*'){
                v.push_back(i);
                v.push_back(j);
            }
        }
    }
    int r1=v[0],c1=v[1],r2=v[2],c2=v[3];
    if(c1==c2 && (c1!=n && c2!=n)){
        ch[r1][c1+1]='*';
        ch[r2][c2+1]='*';
    }
    else if(c1==c2 && (c1==n && c2==n)){
        ch[r1][c1-1]='*';
        ch[r2][c2-1]='*';
    }
    else if(r1==r2 &&(r1!=n && r2!=n)){
        ch[r1+1][c1]='*';
        ch[r1+1][c2]='*';
    }
    else if(r1==r2 &&(r1==n && r2==n)){
        ch[r1-1][c1]='*';
        ch[r2-1][c2]='*';
    }
    else{
        ch[r1][c2]='*';
        ch[r2][c1]='*';
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<ch[i][j];
        }
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