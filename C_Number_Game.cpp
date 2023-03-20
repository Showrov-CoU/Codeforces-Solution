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
        ll n,cnt=0;
        cin>>n;
        if(n%2){
            if(n==1) cout<<"FastestFinger"<<endl;
            else cout<<"Ashishgup"<<endl;
        }
        else{
            if(n==2){cout<<"Ashishgup"<<endl;continue;}
            else{
                int c=0;
                if(n%2==0)
                {
                    while(n%2==0){
                        n/=2;
                        c++;
                    }
                    if(n==1) cout<<"FastestFinger"<<endl;
                    else if(c>=2) cout<<"Ashishgup"<<endl;
                    else{
                        int ok=0;
                        for(ll i=3;i<=sqrt(n);i+=2){
                            if(n%i==0) ok=1;
                        }
                        if(ok) cout<<"Ashishgup"<<endl;
                        else cout<<"FastestFinger"<<endl;
                    }
                }
            }
        }         
    }

    return 0;
}