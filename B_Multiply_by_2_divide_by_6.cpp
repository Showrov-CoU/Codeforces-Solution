#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<ll>
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
        ll n,c=0,ok=0;
        cin>>n;
        if(n==1){cout<<0<<endl;continue;}
        else if(n%6==0){
            while(n%6==0){
                n/=6;
                c++;
                if(n%6==3){n*=2;c++;}
                else if(n%6!=0 && n!=1)ok=1;
            }
            if(ok)cout<<-1<<endl;
            else cout<<c<<endl;
        }
        else if(n%6==3){
            n*=2;
            c++;
            while(n%6==0){
                n/=6;
                c++;
                if(n%6==3){n*=2;c++;}
                else if(n%6!=0 && n!=1)ok=1;
            }
            if(ok) cout<<-1<<endl;
            else cout<<c<<endl;
        }
        else cout<<-1<<endl;      
    }
    return 0;
}