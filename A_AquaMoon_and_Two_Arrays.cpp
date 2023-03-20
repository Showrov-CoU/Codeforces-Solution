#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<int>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

void solve(){
    int n,bs=0,cs=0;
    cin>>n;
    int a[n+2],b[n+2];
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];

    vector barbe,combe;
  
    for(int i=1;i<=n;i++){
        if(a[i]>b[i]){
            int x=a[i]-b[i];
            cs+=x;
            for(int j=1;j<=x;j++) combe.push_back(i);
        }
        else if(a[i]<b[i]){
            int x=b[i]-a[i];
            bs+=x;
            for(int j=1;j<=x;j++) barbe.push_back(i);
        }
    }
    if(bs!=cs) cout<<-1<<endl;
    else if(cs==0 && bs==0) cout<<0<<endl;
    else{
        cout<<barbe.size()<<endl;
        for(int i=0;i<barbe.size();i++) cout<<combe[i]<<" "<<barbe[i]<<endl;
    }
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