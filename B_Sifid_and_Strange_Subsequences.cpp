#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

void solve(){
    int n,ans=0;
    cin>>n;
    int ar[n+2];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    int a=ar[0];
    int b=ar[1];
    int z=abs(a-b);
    int mindif=z;

    for(int i=1;i<n;i++){
        if(mindif>=ar[i] && z>=ar[i]){
            ans++;
            a=b;
            b=ar[i+1];
            int z=abs(a-b);
            mindif=min(mindif,z);
        }
    }
    cout<<ans+1<<endl;
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