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

vector v(32770);

void precl(){
    int n,cnt,cnt2;
    v[0]=0;

    for(int i=1;i<32768;i++){
        cnt2=32768-i;
        n=i; cnt=0;
        while(n!=0){
            n=(n*2)%32768;
            cnt++;
        }
        v[i]=min(cnt,cnt2);
        for(int j=i;j>=max(0,i-16);j--){
            v[j]=min(v[j],v[i]+(i-j));
        }
    }
}

int main() 
{
    FAST
    precl();
    int n,x;
    cin>>n;
    while(n--)
    {
        cin>>x;
        cout<<v[x]<<" ";       
    }
    cout<<endl;
    return 0;
}