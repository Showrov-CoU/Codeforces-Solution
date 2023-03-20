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

int main() 
{
    FAST
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,a,b,cnt=0;
        cin>>n>>x;
        for(ll i=1;i<n;i++){
            cin>>a>>b;
            if(a==x || b==x) cnt++;
        }
        if(cnt<=1)cout<<"Ayush"<<endl;
        else{
            if((n-1)%2)cout<<"Ayush"<<endl;
            else cout<<"Ashish"<<endl;
        }
    }

    return 0;
}