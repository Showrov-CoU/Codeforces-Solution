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
    string s,t,ans="";
    cin>>s>>t;
    map<char,int> mp;
    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
    }
    if(t=="abc" && mp['a']!=0 && mp['b']!=0 && mp['c']!=0){
        for(int i=0;i<mp['a'];i++) cout<<'a';
        for(int i=0;i<mp['c'];i++) cout<<'c';
        for(int i=0;i<mp['b'];i++) cout<<'b';
        for(char ch='d';ch<='z';ch++){
            for(int i=0;i<mp[ch];i++) cout<<ch;
        }
        cout<<endl;
    }
    else{
        sort(s.begin(),s.end());
        cout<<s<<endl;
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