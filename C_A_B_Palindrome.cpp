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
    int a,b,azero=0,bone=0,ques=0,zero,one;
    cin>>a>>b;
    int n=a+b;
    string s,s2;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='0')azero++;
        else if(s[i]=='1')bone++;
        else ques++;
    }
    if(ques==n){
        if((a==b || (a%2 && b%2))){
        cout<<-1<<endl;
        return;
        }
    } 
    zero=a-azero;
    one=b-bone;
    if(azero>a || bone>b){

        cout<<-1<<endl;
        return;
    }
    int mid=(a+b)/2;
    for(int i=0,j=n-1;i<=mid && j>=mid;++i,--j){
        if(i!=j){
            if(s[i]=='?' && s[j]=='?'){
                if(zero>=2){s[i]='0';s[j]='0';zero-=2;}
                else {s[i]='1';s[j]='1';one-=2;}
            }
            else if(s[i]=='?' && s[j]=='0' && zero>=1){s[i]='0';--zero;}
            else if(s[i]=='0' && s[j]=='?' && zero>=1){s[j]='0';--zero;}
            else if(s[i]=='?' && s[j]=='1' && one>=1){s[i]='1';--one;}
            else if(s[i]=='1' && s[j]=='?' && one>=1){s[j]='1';--one;}
            else continue;
        }
        else{
            if(s[i]=='?'){
                if(one>=1)s[i]='1';
                else s[i]='0';
            }
        }
    }
    s2=s;
    reverse(s2.rbegin(),s2.rend());
    int z=0,o=0;
    for(int i=0;i<n;i++){
        if(s2[i]=='0')z++;
        else o++;
    }
    if(s==s2 && z==a && o==b)cout<<s<<endl;
    else cout<<-1<<endl;
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