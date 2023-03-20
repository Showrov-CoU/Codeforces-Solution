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


void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<vector<int>> ind(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        --a[i];
        ind[a[i]].push_back(i);
    }
    for(auto i:ind){
        for(auto j:i) cout<<j<<" ";
        cout<<endl;
    }
    // vector<int> ans(n + 2, n + n);
    // for (int i = 0; i < n; i++) {
    //     int start = -1;
    //     int mx = 0;
    //     for (int j : ind[i]) {
    //         mx = max(mx, j - start);
    //         start = j;
    //     }
    //     mx = max(mx, n - start);
    //     ans[mx] = min(ans[mx], i);
    // }
    // int mn = n + n;
    // for (int i = 1; i <= n; i++) {
    //     mn = min(mn, ans[i]);
    //     if (mn > n)
    //         cout << -1 << ' ';
    //     else {
    //         cout << mn + 1 << ' ';
    //     }
    // }
    // cout <<endl;
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