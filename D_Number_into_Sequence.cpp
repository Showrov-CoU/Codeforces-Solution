#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define loop(i,n)     for(int i=0;i<n;i++)
#define rloop(i,n)    for(int i=n-1;i>=0;i--)
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

bool isPrime[100003];
vector<ll>primes;
vector<pair<ll,ll>>vp; 

void seive()
{
    ll n=100003;
    memset(isPrime,0,sizeof(isPrime));
    primes.push_back(2);
    for(ll i=3;i*i<=n;i+=2)
    {
        if(!isPrime[i])
        {
            for(ll j=i*i;j<=n;j=j+2*i) isPrime[j]=true;
        }
    }
    for(ll i=3;i<=n;i+=2)if(!isPrime[i])primes.push_back(i);
}

void prime_fact(ll n)
{
    for(ll i=0;primes[i]*primes[i]<=n;i++)
    {
        ll cnt=0;
        if(n%primes[i]==0){
            while(n%primes[i]==0){
                n/=primes[i];
                cnt++;
            }
            vp.push_back({cnt,primes[i]});
        }
    }
    if(n>1)
      vp.push_back({1,n});

}

int main() 
{
    FAST
    seive();
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        prime_fact(n);
        sort(vp.begin(),vp.end());
        reverse(vp.begin(),vp.end());
        ll ans=vp[0].second;
        for(ll i=1;i<vp.size();i++){
            ans=ans*pow(vp[i].second,vp[i].first);
        }
        cout<<vp[0].first<<endl;
        for(ll i=0;i<vp[0].first-1;i++)
        {
            cout<<vp[0].second<<" ";
        }
        cout<<ans<<endl;
        ans=0;
        vp.clear();

    }

    return 0;
}