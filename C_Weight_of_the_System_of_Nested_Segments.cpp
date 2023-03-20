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
//#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update > pbds;

bool sortbysec(const pair<int,pair<int,int>> &a, const pair<int,pair<int,int>> &b){
       return a.second.first<b.second.first;
}

void solve(){
    ll n,m,sum=0;
    cin>>n>>m;
    vector<pair<int,pair<int,int>>> v;
    vector<pair<int,int>> ans;
    for(int i=0;i<m;i++){
        ll x,w;
        cin>>x>>w;
        v.push_back(make_pair(i+1,make_pair(x,w)));
    }
    if(m==2){
        cout<<v[0].second.second+v[1].second.second<<endl;
        cout<<1<<" "<<2<<endl;
        return;
    }
    sort(v.begin(), v.end(), sortbysec);
    cout<<endl;
    int sz=v.size();
    int l=0,r=sz-1;
    while(r-l>1){
        int a,b,c;
        if(n<=0) break;
        a=v[l].second.second+v[r].second.second;
        b=v[l].second.second+v[r-1].second.second;
        c=v[l+1].second.second+v[r].second.second;
        cout<<a<<" "<<b<<" "<<c<<endl;
        sum+=min(a,min(b,c));
        cout<<sum<<endl;
        // if(a<b && a<c) ans.push_back(make_pair(l,r));
        // else if(b<c) ans.push_back(make_pair(l,r-1));
        // else ans.push_back(make_pair(l+1,r));
        
        n--;
        l++;
        r--;
    }
    //cout<<sum<<endl;
    //for(auto i:ans) cout<<i.first+1<<" "<<i.second+1<<endl;
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