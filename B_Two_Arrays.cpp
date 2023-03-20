#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define yes           cout<<"YES"<<endl
#define no            cout<<"NO"<<endl
#define fix(x)        cout<<fixed<<setprecision(x)
#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

void solve(){
    int n,t,x;
    map<int,int>m;
    cin>>n>>t;
    for(int i=0;i<n;i++){
        cin>>x;
        int p=t-x;
        if(x>p) cout<<1<<" ";
        else if(x<p) cout<<0<<" ";
        else{
            if(m[p]%2==0) cout<<1<<" ";
            else cout<<0<<" ";
            m[p]++;
        }
    }
    cout<<endl;
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