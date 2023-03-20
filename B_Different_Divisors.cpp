#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
//#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define fr(i,n)       for(int i=0;i<n;i++)
#define rfr(i,n)      for(int i=n-1;i>=0;i--)
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

vector<int>prime;
void seive()
{
    array<int,30001>p;
    p.fill(true);
    for(int i=2;i*i<=30001;i++)
    {
        if(p[i])
        {
            for(int j=i*i;j<=30001;j+=i) p[j]=false;
        }
    }
    for(int i=2;i<=30001;i++)
        if(p[i])
           prime.push_back(i);
}

void solve(){
    ll d,id1,id2;
    cin>>d;
    for(int i=0;i<prime.size();i++)
    {
        if(prime[i]-1 >= d){
            id1=i;
            break;
        }
    }
    int x=prime[id1] + d;
    id2=lower_bound(prime.begin(),prime.end(),x)-prime.begin();
    //cout<<id1<<" "<<id2<<endl;
    cout<<prime[id1]*prime[id2]<<endl;
}

int main() 
{
    FAST
    seive();
    int t;
    cin>>t;
    while(t--)
    {
        solve();        
    }
    return 0;
}