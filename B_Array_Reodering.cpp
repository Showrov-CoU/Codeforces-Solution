#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<int>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

void solve(){
    int n,x,even=0,ans=0;
    cin>>n;
    vector v;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x%2==0)even++;
        else v.push_back(x);
    }
    n-=1;
    while(even!=0){
        ans+=n;
        even--,n--;
    }
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(gcd(v[i],2*v[j])>1) ans++;
        }
    }
    cout<<ans<<endl;
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