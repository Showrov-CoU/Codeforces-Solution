#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
//#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    int a[n+2],b[n+2];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    b[n]=INT_MAX;
    map<int,int>m;
    for(int i=0;i<n;i++) m[b[i]]=b[i+1];
    //for(auto i:m)cout<<i.first<<" "<<i.second<<endl;

    int cnt=0;
    a[n]=INT_MAX;
    for(int i=0;i<n;i++){
        while(m[a[i]]==a[i+1] && i<n) i++;
        cnt++;
    }
    //cout<<cnt<<endl;
    if(cnt<=k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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