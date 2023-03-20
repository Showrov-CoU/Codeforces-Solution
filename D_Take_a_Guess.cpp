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
//#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update > pbds;

void solve(){
    ll n,k;
    cin>>n>>k;
    vector ans;

    ll and12,or12,and13,or13,and23,or23;
    cout<<"and"<<" "<<1<<" "<<2<<endl;
    cin>>and12;
    cout<<"or"<<" "<<1<<" "<<2<<endl;
    cin>>or12;
    cout<<"and"<<" "<<1<<" "<<3<<endl;
    cin>>and13;
    cout<<"or"<<" "<<1<<" "<<3<<endl;
    cin>>or13;
    cout<<"and"<<" "<<2<<" "<<3<<endl;
    cin>>and23;
    cout<<"or"<<" "<<2<<" "<<3<<endl;
    cin>>or23;
    
    ll plus12 = and12+or12;
    ll plus13 = and13+or13;
    ll plus23 = and23+or23;

    ll valueofOne = (plus12+plus13-plus23)/2;
    ll valueofTwo = plus12-valueofOne;
    ll valueofThree = plus13-valueofOne;

    ans.push_back(valueofOne);
    ans.push_back(valueofTwo);
    ans.push_back(valueofThree);

    ll andv,orv;
    for(int i=4;i<=n;i++){
        cout<<"and"<<" "<<1<<" "<<i<<endl;
        cin>>andv;
        cout<<"or"<<" "<<1<<" "<<i<<endl;
        cin>>orv;
        ll sum=andv+orv;
        ans.push_back(sum-ans[0]);
    }
    sort(ans.begin(),ans.end());
    cout<<"finish"<<" "<<ans[k-1]<<endl; 
}

int main() 
{
    //FAST
    
        solve();        
    
    return 0;
}