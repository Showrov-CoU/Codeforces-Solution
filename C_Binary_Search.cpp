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

const int M=1e9+7;
// ll fact(ll n){
//     if(n==1 || n==0) return 1;
//     return ((n%M)*(fact(n-1)%M))%M;
// }
void solve(){
    ll n,x,pos;
    cin>>n>>x>>pos;
    ll ans=1;
    int l=0,r=n,cnts=0,cntb=0;
    while(l<r){
        int mid=(l+r)/2;
        if(mid==pos) l=mid+1;
        else if(mid>pos) {
            r=mid;
            cntb++;
        }
        else{
            l=mid+1;
            cnts++;
        }
    }
    cout<<cnts<<" "<<cntb<<endl;
    for(int i=0;i<cnts;i++){
        ll v=x-1-i;
        ans*=v;
        ans%=M;
    }
    for(int i=0;i<cntb;i++){
        ll v=n-x-i;
        ans*=v;
        ans%=M;
    }
    //cout<<ans<<endl;
    ll dc=n-cnts-cntb-1;
    for(int i=2;i<=dc;i++){
        ans*=i;
        ans%=M;
    }
    cout<<ans<<endl;
}

int main() 
{
    FAST
    
    solve();        
    
    return 0;
}