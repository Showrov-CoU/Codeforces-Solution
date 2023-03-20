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
    string s,s1,s3,s2="a";
    cin>>s;
    int n=s.size();
    s1=s;
    if(s[0]==s[n-1]){
        s1+='a';
        s3.assign(s1.rbegin(),s1.rend());
        if(s3==s1){s2+=s;s1=s2;}
        else s3.clear();
    }
    else if(s[0]!=s[n-1] && s[n-1]=='a')s1+='a';
    else if(s[0]!=s[n-1] && s[0]=='a'){s2+=s;s1=s2;}
    else s1+='a';
    s3.assign(s1.rbegin(),s1.rend());
    if(s3==s1)cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        cout<<s1<<endl;
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