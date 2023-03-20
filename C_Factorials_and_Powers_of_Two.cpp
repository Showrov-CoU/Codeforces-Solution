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

int main(){
    FAST

    ll i,j=1,k,t,total,n,p,cnt,sum,rem,ans;
    vector a;
    a.push_back(j);

    for(int i=1; i<=14; i++)
    {
        j=j*i;
        a.push_back(j);
    } 
    k=a.size();
    total=(1<<k);
    
    cin>>t;
    for(;t--;){
        cin>>n;
        ans=-1;
        for(i=0; i<total; i++){
            sum=cnt=0;
            p=1;
            for(j=0; j<k; j++)
            {
                if((i&p)){
                    sum=sum+a[j];
                    cnt++;
                }
                p*=2;
            }
                
            if(sum>n) continue;
                
            rem=n-sum;
                
            while(rem>0){
                cnt++;
                rem=(rem&(rem-1));
            }
                
            if(ans==-1) ans=cnt;
            else ans=min(ans, cnt);
        }   
        cout<<ans<<"\n";
    }
    return 0;
}