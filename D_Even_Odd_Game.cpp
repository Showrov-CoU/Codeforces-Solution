#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define fr(i,n)       for(int i=0;i<n;i++)
#define revfr(i,n)    for(int i=n-1;i>=0;i--)
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

void solve(){
    ll n,score=0;
    cin>>n;
    vector v(n);
    for(ll &i : v) cin>>i;
    sort(v.rbegin(),v.rend());
    fr(i,n){
        if(i%2==0){
            if(v[i]%2==0)score+=v[i];
        }
        else{
            if(v[i]%2)score-=v[i];
        }
    }
    if(score==0)cout<<"Tie"<<endl;
    else if(score>0)cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;
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