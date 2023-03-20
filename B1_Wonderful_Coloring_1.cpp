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
    string s;
    cin>>s;
    map<char,int>m;
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    }
    int r=0,g=0;
    for(auto i:m){
        int x=i.second;
        if(x>=2) r++,g++;
        else{
            if(r>g)g++;
            else r++;
        }
    }
    if(r==g) cout<<r<<endl;
    else cout<<r-1<<endl;
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