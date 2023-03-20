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

void solve(){
    int n,one=0,zero=0;
    cin>>n;
    string a,b;
    cin>>a>>b;
    vector<pair<int,int>>v;
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]=='0')zero++;
        else one++;
        if(one==zero){
            v.push_back({j,i});
            j=i+1;
        }
    }
    for(auto x:v){
        int start=x.first;
        int end=x.second;
        if(a[start]==b[start])continue;
        else{
            for(int i=start;i<=end;i++){
                if(a[i]=='1')a[i]='0';
                else a[i]='1';
            }
        }
    }
    bool ok=false;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]) ok=true;
    }
    if(ok)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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