#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define loop(i,n)      for(int i=0;i<n;i++)
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

vector<int>prime;
map<ll,vector<int>>mp;
void seive()
{
    array<int,200001>p;
    p.fill(true);
    for(int i=2;i*i<=200001;i++)
    {
        if(p[i])
        {
            for(int j=i*i;j<=200001;j+=i) p[j]=false;
        }
    }
    for(int i=2;i<=200001;i++)
        if(p[i])
           prime.push_back(i);
}

void prime_factor(ll m)
{
    ll i=0;
    while(prime[i]*prime[i] <= m)
    {
        if(m%prime[i] == 0)
        {
            int count=0;
            while(m%prime[i] == 0)
            {
                m/=prime[i];
                count++;
                
            }
            mp[prime[i]].push_back(count);
            i++;
        }
        else i++;
    } 
    if(m>1)mp[m].push_back(1);
}

int main() 
{
	FAST
    seive();
	ll n;
    cin>>n;
    ll ar[n+2];
    loop(i,n) cin>>ar[i];
    loop(i,n) prime_factor(ar[i]);
    
    ll ans=1;
    for(ll i:prime)
    {
        if(mp.find(i)==mp.end() || mp[i].size()+1 < n)continue;
        sort(mp[i].begin(),mp[i].end());
        if(mp[i].size()+1 == n)
            ans*=pow(i,mp[i][0]);
        else
            ans*=pow(i,mp[i][1]);
    }
    cout<<ans<<endl;
	return 0;
}

