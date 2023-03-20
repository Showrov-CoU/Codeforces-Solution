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

ll n,k;

string calculate(string given,int n,int pos,int distinctChar,string create){
    string res;
    if(distinctChar > k) return "";
    if(given.substr(0,pos) > create.substr(0,pos)) return "";
    if(pos>=n) return create;

    for(char c='0';c<='9';c++){
        create[pos]=c;
        bool ok=false;
        for(int i=0;i<pos;i++){
            if(create[i]==c){
                ok=true;
                break;
            }
        }
        res=calculate(given,n,pos+1,distinctChar+(ok==false),create);
        if(res.size()>0) return res;
    }
    return res;
}

void solve(){
    cin>>n>>k;
    string given,create="";
    given=to_string(n);
    int sz=given.size();
    for(int i=0;i<sz;i++) create+='0';
    cout<<calculate(given,sz,0,0,create)<<endl;
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