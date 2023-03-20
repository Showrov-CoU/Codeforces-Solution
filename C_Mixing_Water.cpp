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
        ll h,c,t,av,x,y;
        cin>>h>>c>>t;
        av=(h+c)/2;
        if(av >= t) cout<<2<<endl;
        else{
            x=(t-c)/(2*t-h-c);
            y=x+1;
            double tx=((h*x) + (x-1)*c) / (2.0*x -1);
            double ty=((h*y) + (y-1)*c) / (2.0*y -1);
            double dif1=abs(tx-t);
            double dif2(abs(ty-t));
            if(dif1<=dif2) cout<<(2*x)-1<<endl;
            else cout<<(2*y)-1<<endl;
        }
    }

    return 0;
}