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

int left(string s,string t,int i,int x){
    while(x<t.length() && i>=0){
        if(s[i]==t[x]){
            x++;
            i--;
        }
        else break;
    }
    if(x==t.length()) return 1;
    return 0;
}

int right(string s,string t,int i,int x){
    if(x==t.length()) return 1;
    if(x+1==t.length()){
        if(i+1<s.length() && s[i+1]==t[x]) return 1;
        else if(i-1 >= 0 && s[i-1]==t[x]) return 1;
        else return 0;
    }

    int r1=0,r2=0;
    if(i-1>=0 && s[i-1]==t[x]){
        r1=left(s,t,i-1,x);
    }
    if(r1)return 1;
    if(i+1 < s.length() && s[i+1]==t[x]){
        r2=right(s,t,i+1,x+1);
    }
    return (r1||r2);
}

void solve(){
    string s,t;
    cin>>s>>t;
    for(int i=0;i<s.length();i++){
        if(s[i] == t[0]){
            if(right(s,t,i,1)){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
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