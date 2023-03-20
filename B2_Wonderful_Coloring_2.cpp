#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
//#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

void solve(){
    int n,k,x;
    cin>>n>>k;
    vector<int>v[n+2];
    map<int,int>m;
    for(int i=0;i<n;i++){
        cin>>x;
        m[x]++;
        v[x].push_back(i);
    }
    vector<int>ans(n),v2;
    for(auto i:m){
        int a=i.first;
        int b=i.second;
        if(b>=k){
            int color=1;
            for(int i=0;i<k;i++){
                int z=v[a][i];
                ans[z]=color;
                color++;
            }
        }
        else{
            for(int i=0;i<v[a].size();i++)
                v2.push_back(v[a][i]);
        }
    }
    int color=1;
    int z=v2.size() % k;
    for(int i=0;i<v2.size()-z;i++){
        int id=v2[i];
        ans[id]=color;
        color++;
        if(color>k) color=1;
    }
    for(auto i:ans) cout<<i<<" ";
    cout<<endl;
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