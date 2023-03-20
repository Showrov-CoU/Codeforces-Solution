#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")

#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define fr(i,n)       for(int i=0;i<n;i++)
#define revfr(i,n)    for(int i=n-1;i>=0;i--)
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

bool okey(vector<int>& v){
    fr(i,v.size()){
        if(v[i]>v[i+1]) return false;
    }
    return true;
}

int MEX(vector<int>& v){
    int n;
    n=v.size();
    bool s[n+1];
    memset(s,'0',sizeof(s));
    fr(i,n){
        int idx=v[i];
        s[idx]=1;
    }
    fr(i,n){
        if(s[i]==0) return i;
    }
    return n;
}

int first_not_match(vector<int>& v){
    fr(i,v.size()){
        if(v[i]!=i) return i;
    }
    return -1;
}

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    fr(i,n) cin>>v[i];
    vector<int> ans;
    while(!okey(v)){
        int mex=MEX(v);
        if(mex==n){
            int idx=first_not_match(v);
            if(idx==-1)break;
            v[idx]=mex;
            ans.push_back(idx+1);
        }
        else{
            v[mex]=mex;
            ans.push_back(mex+1);
        }
    }
    cout<<ans.size()<<endl;
    fr(i,ans.size()) cout<<ans[i]<<" ";
    cout<<endl;
    v.clear();
    ans.clear();
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