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
        int n,d,m;
        cin>>n;
        int a[36]={19,29,39,49,59,69,79,89,189,289,389,
                   489,589,689,789,1789,2789,3789,4789,
                   5789,6789,16789,26789,36789,46789,56789,
                   156789,256789,356789,456789,1456789,
                   2456789,3456789,13456789,23456789,123456789};
        if(n<=9)cout<<n<<endl;
        else if(n>45)cout<<-1<<endl;
        else cout<<a[n-10]<<endl;
    }

    return 0;
}