#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

void solve(){
    ll W,H,w1,h1,w2,h2,sw,sh,x,y;
    cin>>W>>H;
    cin>>w1>>h1>>w2>>h2;
    cin>>sw>>sh;
    x=w2-w1;
    y=h2-h1;
    ll ansh=LLONG_MAX;
    ll answ=LLONG_MAX;
    if(x+sw<=W || y+sh<=H){
        if(x+sw<=W){
            answ=min(sw-w1,sw-(W-w2));
            if(answ<0) answ=0;
        }
        if(y+sh<=H){
            ansh=min(sh-h1,sh-(H-h2));
            if(ansh<0) ansh=0;
        }
    }
    else{
        cout<<-1<<endl;
        return;
    }
    ll ans=min(answ,ansh);
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