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
vector vec[2];
void oneDigitNumber(ll val,ll digit){
    if(val>2000000000){
        return;
    }
    vec[0].push_back(val);
    oneDigitNumber(val*10+digit, digit);
}
void twoDigitNumber(ll val, ll digit1,ll digit2) {
    if(val>2000000000) {
        return;
    }
    vec[1].push_back(val);
    twoDigitNumber(val*10+digit1, digit1, digit2);
    twoDigitNumber(val*10+digit2, digit1, digit2);
}
void precalc(){
    for(int i=1;i<=9;i++){
        oneDigitNumber(i, i);
    }
    for(int i=0;i<=9;i++){
        for(int j=i+1;j<=9;j++){
            if(i>0) twoDigitNumber(i, i, j);
            twoDigitNumber(j, i, j);
        }
    }
    sort(vec[0].begin(), vec[0].end());
    for(ll i=0;i<vec[0].size();i++) {
        ll u=vec[0][i];
        vec[1].push_back(u);
    }
    sort(vec[1].begin(), vec[1].end());
}

void solve(){
    ll n,k;
    cin>>n>>k;
    ll low=0,high=vec[k-1].size() - 1;
    ll ans=0;
    while(low<=high){
        ll mid=(low+high)/2;
        if(vec[k-1][mid]>=n){
            ans=vec[k-1][mid];
            high=mid-1;
        }
        else low=mid+1;
    }
    cout<<ans<<endl;
}

int main() 
{
    FAST
    precalc();
    int t;
    cin>>t;
    while(t--)
    {
        solve();        
    }
    return 0;
}