#include <bits/stdc++.h>

#define PI            2*acos(0.0)
#define ll            long long int
#define ull           unsigned long long int
#define MOD           1e9+7
#define endl          ("\n")
//#define vector        vector<ll>
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*(b/__gcd(a,b)))
#define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

using namespace std;

// struct marathon
// {
//     int a,b,c,d,e,indx;
// };

// bool cmp(marathon x,marathon y){
//     int cnt=0;
//     if(x.a<y.a) cnt++;
//     if(x.b<y.b) cnt++;
//     if(x.c<y.c) cnt++;
//     if(x.d<y.d) cnt++;
//     if(x.e<y.e) cnt++;
//     if(cnt>=3) return true;
//     else return false;
// }
// void solve(){
//     int n;
//     cin>>n;
//     vector<marathon>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i].a>>v[i].b>>v[i].c>>v[i].d>>v[i].e;
//         v[i].indx=i+1;
//     }
//     sort(v.begin(),v.end(),cmp);
//     marathon x=v[0];
//     for(int i=1;i<n;i++){
//         marathon y=v[i];
//         int cnt=0;
//         if(x.a<y.a) cnt++;
//         if(x.b<y.b) cnt++;
//         if(x.c<y.c) cnt++;
//         if(x.d<y.d) cnt++;
//         if(x.e<y.e) cnt++;
//         if(cnt<3){
//             cout<<-1<<endl;
//             return;
//         }
//     }
//     cout<<x.indx<<endl;
// }

void solve(){
    int n;
    cin>>n;
    vector<int>v[n];
    for(int i=0;i<n;i++){
        int x=5;
        while(x--){
            int a;
            cin>>a;
            v[i].push_back(a);
        }
    }
    int ans=0;
    for(int i=1;i<n;i++){
        int cnt=0;
        for(int k=0;k<5;k++){
            if(v[i][k]<v[ans][k]) cnt++;
        }
        if(cnt>=3) ans=i;
    }
    for(int i=0;i<n;i++){
        if(ans==i) continue;
        int cnt=0;
        for(int k=0;k<5;k++){
            if(v[i][k]<v[ans][k]) cnt++;
        }
        if(cnt>=3){
            cout<<-1<<endl;
            return;
        }
    }
    cout<<ans+1<<endl;
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