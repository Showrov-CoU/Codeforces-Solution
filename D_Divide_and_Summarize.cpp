#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<int>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

void calculate_sum(vector &v,unordered_set<ll> &u){
    ll sum=0;
    int s=v.size();
    for(int i=0;i<s;i++) sum+=v[i];
    u.insert(sum);
    int x=*max_element(v.begin(),v.end());
    int y=*min_element(v.begin(),v.end());
    if(x==y) return;
    int mid=(x+y)/2;
    vector a,b;
    for(int i=0;i<s;i++){
        if(v[i]<=mid) a.push_back(v[i]);
        else b.push_back(v[i]);
    }
    calculate_sum(a,u);
    calculate_sum(b,u);
}

void solve(){
    int n,q;
    cin>>n>>q;
    vector v(n),p(q);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<q;i++) cin>>p[i];
    unordered_set<ll>u;
    calculate_sum(v,u);
    for(int i=0;i<q;i++){
        if(u.count(p[i])==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
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