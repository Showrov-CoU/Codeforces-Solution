#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define yes           cout<<"YES"<<endl
#define no            cout<<"NO"<<endl
#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define fr(i,n)       for(int i=0;i<n;i++)
#define rfr(i,n)      for(int i=n-1;i>=0;i--)
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

void solve(){
    string s,b="";
    int ob=0,m=0,cb=0,br=0;
    cin>>s;
    int size=s.size();
    if(s[0]==s[size-1]){
        no;
        return;
    }
    for(int i=0;i<size;i++){
        if(s[i]==s[0]){
            b+='(';
            ob++;
        }
        else if(s[i]==s[size-1]){
            b+=')';
            cb++;
        }
        else {
            b+='*';
            m++;
        }
    }
    if(ob>cb){
        for(int i=0;i<size;i++){
            if(b[i]=='*') b[i]=')';
        }
    }
    else{
        for(int i=0;i<size;i++){
            if(b[i]=='*') b[i]='(';
        }
    }
    bool ok=false;
    for(int i=0;i<size;i++){
        if(b[i]=='(') br++;
        else br--;
        if(br<0){
            ok=true;
            break;
        }
    }
    if(ok || br) no;
    else yes;
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