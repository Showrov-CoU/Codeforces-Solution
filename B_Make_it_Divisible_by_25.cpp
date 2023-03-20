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
    string s;
    cin>>s;
    int sz=s.size();
    int i=sz-1,i2=sz-1,ab=INT_MAX,ac=INT_MAX;
    while(s[i]!='0'){
        if(s[i]=='0'){
            break;
        }
        else i--;
    }
    while(s[i2]!='5'){
        if(s[i]=='5'){
            break;
        }
        else i2--;
    }

    if(s[i]=='0'){
        int j;
        for(j=i-1;j>=0;j--){
            if(s[j]=='0' || s[j]=='5'){
                break;
            }
        }
        ab=((sz-1)-i) + (i-(j+1));
    }
    if(s[i2]=='5'){
        int j;
        for(j=i2-1;j>=0;j--){
            if(s[j]=='2' || s[j]=='7'){
                break;
            }
        }
        ac=((sz-1)-i2) + (i2-(j+1));
    }
    cout<<min(ab,ac)<<endl;
    // if(s[i]=='0'){
    //     int j;
    //     for(j=i-1;j>=0;j--){
    //         if(s[j]=='0' || s[j]=='5'){
    //             break;
    //         }
    //     }
    //     if(j>-1) ab=((sz-1)-i) + (i-(j+1));
    //     else{
    //         int x=s.find("25");
    //         int y=s.find("75");
    //         int mn;
    //         if(x<sz && y<sz) mn=max(x,y);
    //         else mn=min(x,y);

    //         ac=(sz-1)-(mn+1);
    //     }
    //     cout<<min(ab,ac)<<endl;
    //     return;
    // }
    // if(s[i]=='5'){
    //     int j;
    //     for(j=i-1;j>=0;j--){
    //         if(s[j]=='2' || s[j]=='7'){
    //             break;
    //         }
    //     }
    //     if(j>-1) ab=((sz-1)-i) + (i-(j+1));
    //     else{
    //         int x=s.find("50");
    //         int y=s.find("00");
    //         int mn;
    //         if(x<sz && y<sz) mn=max(x,y);
    //         else mn=min(x,y);

    //         ac=(sz-1)-(mn+1);
    //     }
    //     cout<<min(ab,ac)<<endl;
    //     return;
    // }
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