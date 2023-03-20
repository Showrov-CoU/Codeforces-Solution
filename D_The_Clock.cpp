#include <bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

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

typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update > pbds;

bool check(int h, int m){
    string s=to_string(h);
    if(s.size()==1){
        char ch=s[0];
        s[0]='0';
        s+=ch;
    }
    string t=to_string(m);
    if(t.size()==1){
        char ch=t[0];
        t[0]='0';
        t+=ch;       
    }
    if(s[0]==t[1] and s[1]==t[0]) return true;
    else return false;
}
void solve(){
    string s;
    int x,IH,IM,H,M,h,m,ans=0;
    cin>>s>>x;
    
    H=((s[0]-'0')*10)+(s[1]-'0');
    M=((s[3]-'0')*10)+(s[4]-'0');

    IH=H%24; IM=M%60;

    h=x/60;
    m=x-(h*60);

   int z=(1440/x); 
    while(z--){
        if(check(H,M)) ans++;
        H=(H+h)%24;
        if((M+m)>=60){
            H=(H+1)%24;
            M=(M+m)%60;
        }
        else M=(M+m)%60; 
    }
    cout<<ans<<endl;
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