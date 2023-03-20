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
    int n;
    cin>>n;
    string s,t,ans="";
    cin>>s>>t;
    
    char fsc=s[0],ssc=t[0];
    if(n==1){
        if(s[0]==t[0]) yes;
        else no;
    }
    else if(n==2){
        if(s==t){
            yes;
            return;
        }
        else if(s[0]<=t[0])
        {
            if((s[0]=='a' and t[0]=='b') and (s[1]=='b' and t[1]=='a')) yes;
            else if((s[0]=='b' and t[0]=='c') and (s[1]=='c' and t[1]=='b')) yes;
            else no;
        }
        else no;
    }
    else if(fsc<=ssc and n>=3){
        ans+=t[0];
        int j=1;
        while(s[j]==t[j] and j<n){
            ans+=t[j];
            j++;
        }
        
        if(ans==t){
            yes;
            return;
        }
        else if(s[j]!=ssc and t[j]!=fsc){
            no;
            return;
        }
        else if(s[j]<t[j]){
            no;
            return;
        }
        else{
            ans+=t[j];
            bool ok=false;
            for(int i=j+1;i<n;i++){
                if(s[i]==t[i]) ans+=t[i];
                else if(s[i]==ssc and t[i]==fsc){
                    ans+=t[i];
                }
                else if(s[i]<t[i]){
                    fsc=s[i];
                    ssc=t[i];
                    ans+=t[i];
                }
                else{
                    ok=true;
                    break;
                }
            }
            //cout<<ans<<endl;
            if(ok){
                no;
                return;
            }   
            if(ans!=t) no;
            else yes;
        }
    }
    else no;
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