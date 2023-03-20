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
#define vector        vector<int>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update > pbds;


void solve(){

    int n,two=0,one=0;
    cin>>n;
    string s;
    cin>>s;
    char ans[n+2][n+2];
    vector on,tw;

    for(int i=0;i<n;i++){
        if(s[i]=='2'){
            two++;
            tw.push_back(i+1);
        }
        else{
            one++;
            on.push_back(i+1);
        }
    }

    if(two==2 || two==1){
        no;
        return;
    }

    if(one==n){
        yes;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==j) cout<<"X";
                else cout<<"=";
            }
            cout<<endl;
        }
        return;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j) ans[i][j]='X';
            else ans[i][j]='=';
        }
    }

    int sz=on.size();
    int szt=tw.size();

    for(int i=0;i<sz;i++){
        for(int j=0;j<on.size();j++){
            if(on[i]==on[j]) continue;
            else ans[on[i]][on[j]]='=';
        }
    }

    for(int i=0;i<sz;i++){
        for(int j=0;j<szt;j++){
            ans[on[i]][tw[j]]='+';
            ans[tw[j]][on[i]]='-';
        }
    }

    for(int i=0;i<szt-1;i++){
        ans[tw[i]][tw[i+1]]='+';
        ans[tw[i+1]][tw[i]]='-';
    }
    ans[tw[szt-1]][tw[0]]='+';
    ans[tw[0]][tw[szt-1]]='-';
    
    yes;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    on.clear();
    tw.clear();
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