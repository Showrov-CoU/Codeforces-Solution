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

int h,m,hh,mm;
int a[10]={0,1,5,-1,-1,2,-1,-1,8,-1};

bool check(int ansh,int ansm){
    if(a[ansh/10]==-1 || a[ansh%10]==-1 || a[ansm/10]==-1 || a[ansm%10]==-1)
        return false;
    int ih=a[ansm%10]*10 + a[ansm/10];
    int im=a[ansh%10]*10 + a[ansh/10];
    return ih<h && im<m;
}

void solve(){
    scanf("%d%d",&h,&m);
    scanf("%d:%d",&hh,&mm);
    int ansh=hh,ansm=mm;
    
    while(ansh!=0 || ansm!=0){
        if(check(ansh,ansm)) break;
        if(ansm == m-1) ansh=(ansh+1)%h;
        ansm=(ansm+1)%m;
    }
    printf("%d%d:%d%d\n",ansh/10,ansh%10,ansm/10,ansm%10);
}

int main() 
{
    FAST
    int t;
    //cin>>t;
    scanf("%d",&t);
    while(t--)
    {
        solve();        
    }
    return 0;
}