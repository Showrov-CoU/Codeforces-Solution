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
    vector v;
    int k,n;
    cin>>k;
    n=s.size();
    for(int i=0;i<n;i++) v.push_back(s[i]-48);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(s[j]>s[i] && k-j>=0){
                s[i]=s[j]
            }
        }
        
        // if(s[i+1]>s[i] && k>0){
        //     swap(s[i],s[i+1]);
        //     k--;
        //     i=-1;
        // }   
    }
    cout<<s<<endl;
}

int main() 
{
    FAST
    
        solve();        
    
    return 0;
}