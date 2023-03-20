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

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='?'){
            int l=i,r,cnt=0;
            while(s[i]=='?' && i<n){
                i++,cnt++;
                r=i;
            }
            if(s[r]=='B'){
                if(cnt%2==0){
                    int c=0;
                    for(int k=l;k<r;k++){
                        if(c%2==0) s[k]='B';
                        else s[k]='R';
                        c++;
                    }
                }
                else{
                    int c=0;
                    for(int k=l;k<r;k++){
                        if(c%2==0) s[k]='R';
                        else s[k]='B';
                        c++;
                    }
                }
            }
            else if(s[r]=='R'){
                if(cnt%2==0){
                    int c=0;
                    for(int k=l;k<r;k++){
                        if(c%2==0) s[k]='R';
                        else s[k]='B';
                        c++;
                    }
                }
                else{
                    int c=0;
                    for(int k=l;k<r;k++){
                        if(c%2==0) s[k]='B';
                        else s[k]='R';
                        c++;
                    }
                }      
            }
            else if(r==n || i==n){
                if(l-1 >= 0){
                    if(s[l-1]=='B'){
                        int c=0;
                        for(int k=l;k<r;k++){
                            if(c%2==0) s[k]='R';
                            else s[k]='B';
                            c++;
                        }
                    }
                    else if(s[l-1]=='R'){
                        int c=0;
                        for(int k=l;k<r;k++){
                            if(c%2==0) s[k]='B';
                            else s[k]='R';
                            c++;
                        }
                    }   
                }
                else{
                    int c=0;
                    for(int k=l;k<r;k++){
                        if(c%2==0) s[k]='B';
                        else s[k]='R';
                        c++;
                    }
                }
            }  
        }
    }
    cout<<s<<endl;
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