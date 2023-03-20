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
    ll n;
    cin>>n;
    map<int,int>m;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        m[x]++;
    }
    priority_queue<int>q;
    for(auto i:m)q.push(i.second);
    while(q.size()>=2){
        int a=q.top();
        q.pop();
        int b=q.top();
        q.pop();
        a--;
        b--;
        if(a)q.push(a);
        if(b)q.push(b);
    }
    if(q.size()==0)cout<<0<<endl;
    else cout<<q.top()<<endl;
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