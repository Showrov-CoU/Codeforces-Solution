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
        int n;
        cin>>n;
        string s,a,b;
        cin>>s;
        a=s.substr(0,4);
        b=s.substr(n-4,n);
        if(a=="2020" || b=="2020") cout<<"YES"<<endl;
        else if(s[0]!='2' && s[n-1]!='0') cout<<"NO"<<endl;
        else if(s[0]=='2' && s[n-1]=='0')
        {
            if(s[1]=='0' && s[n-2]=='2'){
                cout<<"YES"<<endl;
            }
            else if(s[1]!='0' && s[n-2]=='2'){
                if(s[n-3]=='0') cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else if(s[1]=='0' && s[n-2]!='2'){
                if(s[2]=='2') cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else cout<<"NO"<<endl;
        } 
        else cout<<"NO"<<endl;    
    }

    return 0;
}