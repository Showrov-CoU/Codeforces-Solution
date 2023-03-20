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
    ll n,one=0,zero=0;
    cin>>n;
    string s,a,b;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='1')one++;
        else zero++;
    }
    if(one%2==1 || zero%2==1 || s[0]=='0' || s[n-1]=='0') cout<<"NO"<<endl;
    else{
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                if(one){ a+='('; b+='('; one-=2; }
                else{ a+=')'; b+=')'; }
            }
            else{
                if(zero%2==0){ a+='('; b+=')'; zero--; }
                else{ a+=')'; b+='('; zero--; }
            }
        }
        cout<<"YES"<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
        
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