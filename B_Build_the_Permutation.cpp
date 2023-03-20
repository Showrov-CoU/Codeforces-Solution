#include <bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

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

typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update > pbds;

void solve(){
    vector ar(100005,0);
    ll n,a,b;
    cin>>n>>a>>b;
    ll d=(n-1)/2;
    if(n<=2) cout<<-1<<endl;
    else if(n==3){
        if(a==1 && b==1){
            cout<<-1<<endl;
            return;
        }
        else if(a==0 && b==1) {
            cout<<3<<" "<<1<<" "<<2<<endl;
            return;
        }
        else{
            cout<<1<<" "<<3<<" "<<2<<endl;
            return;
        }
    }
    else if(abs(a-b)>2 || a>d || b>d){
        cout<<-1<<endl;
        return;
    }
    else if(a==b){
        int v=n;
        int m=1;
        for(int i=1;i<=a;i++){
            ar[i*2]=v;
            v--;
        }
        int i=1;
        while(i<=n){
            if(ar[i]==0){
                ar[i]=m;
                m++;
            }
            i++;
        }
        for(int i=1;i<=n;i++) cout<<ar[i]<<" ";
        cout<<endl;
    }
    else if(a==0 && b==1){
        cout<<n<<" ";
        for(int i=1;i<n;i++) cout<<i<<" ";
        cout<<endl;
    }
    else if(a==1 && b==0){
        cout<<1<<" ";
        for(int i=n;i>1;i--) cout<<i<<" ";
        cout<<endl;
    }
    else if(a>b){
        ll v=n;
        for(int i=1;i<=a;i++){
            ar[i*2]=v;
            v--;
        }
        int i=1;
        while(v>0){
            if(ar[i]==0){
                ar[i]=v;
                v--;
            }
            i++;
        }
        for(int i=1;i<=n;i++) cout<<ar[i]<<" ";
        cout<<endl;
    }
    else if(a<b){
        int m=1;
        for(int i=1;i<=b;i++){
            ar[i*2]=m;
            m++;
        }
        int i=1;
        while(i<=n){
            if(ar[i]==0){
                ar[i]=m;
                m++;
            }
            i++;
        }
        for(int i=1;i<=n;i++) cout<<ar[i]<<" ";
        cout<<endl;
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