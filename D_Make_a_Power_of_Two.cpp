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

vector v;

void all_power_of_two()
{
    for(int i=0;i<=64;i++) v.push_back((1LL<<i));
}

void solve(){
    ll n;
    cin>>n;

    if(n&(n-1)==0){
        cout<<0<<endl;
        return;
    }
    
    string s = to_string(n);
    int ans=INT_MAX;
    int l1=s.size();
    for(auto i:v){
        string t=to_string(i);
        int l2=t.size(),l=0,r=0,res=0;
        while(l<l1 && r<l2){
            if(s[l]==t[r]) l++,r++;
            else res++,l++; 
        }
        if(l==l1 && r!=l2) res+=(l2-r);
        else if(l!=l1 && r==l2) res+=(l1-l);
        ans=min(ans,res);
    }
    cout<<ans<<endl;
}

int main() 
{
    FAST
    all_power_of_two();
    int t;
    cin>>t;
    while(t--)
    {
        solve();        
    }
    return 0;
}