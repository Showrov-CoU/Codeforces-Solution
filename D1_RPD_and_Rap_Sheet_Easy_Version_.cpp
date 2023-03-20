// #include <bits/stdc++.h>

// #define PI            2*acos(0.0)
// #define ll            long long int
// #define ull           unsigned long long int
// #define MOD           1e9+7
// #define endl          ("\n")
// #define vector        vector<ll>
// #define gcd(a,b)      __gcd(a,b)
// #define lcm(a,b)      (a*(b/__gcd(a,b)))
// #define FAST          ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

// using namespace std;

// int q(int n,int k){
//     cin>>n;

// }

// void solve(){
//     ll n,k;
//     cin>>n>>k;

// }

// int main() 
// {
//     FAST
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         solve();        
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t=1;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        for(int i=0;i<n;i++)
        {
            if(i==0)
                cout << 0 << endl;
            else
                cout << (i^(i-1)) << endl;
            int v;
            cin >> v;
            if(v==1)
                break;
        }
    }
    return 0;
}