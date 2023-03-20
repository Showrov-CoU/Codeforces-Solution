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
    ll n,q;
    cin>>n>>q;
    deque<int>dq;
   
    int qr[q+2];
    for(int i=0;i<n;i++){
        int x;cin>>x;
        dq.push_back(x);
    }
    for(int i=1;i<=q;i++)cin>>qr[i];
    for(int i=1;i<=q;i++){
        int x=qr[i];
        auto it=std::find(dq.begin(),dq.end(),x);
        int id=it-dq.begin()+1;
        cout<<id<<" ";
        dq.erase(dq.begin()+(it-dq.begin()));
        dq.push_front(x);
        // for(int i:dq)cout<<i<<" "; 
        // cout<<endl;
    }
    cout<<endl;
    
}

int main() 
{
    FAST
   
        solve();        

    return 0;
}