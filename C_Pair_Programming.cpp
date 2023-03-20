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
    int k,n,m,i,j;
    cin>>k>>n>>m;
    vector a(n),b(m);

    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    i=0,j=0;

    vector v;

    while(i<n || j<m){
        if(i<n && j<m){
            if(a[i]==0) v.push_back(0),i++,k++;
            else if(b[j]==0) v.push_back(0),j++,k++;
            else{
                if(a[i]<b[j] && a[i]<=k) v.push_back(a[i]),i++;
                else if(b[j]<=a[i] && b[j]<=k) v.push_back(b[j]),j++;
                else{
                    cout<<-1<<endl;
                    return;
                }
            }
        }
        else if(i<n){
            if(a[i]==0) v.push_back(0),i++,k++;
            else{
                if(a[i]<=k) v.push_back(a[i]),i++;
                else{
                    cout<<-1<<endl;
                    return;
                }
            }
        }
        else if(j<m){
            if(b[j]==0) v.push_back(0),j++,k++;
            else{
                if(b[j]<=k) v.push_back(b[j]),j++;
                else{
                    cout<<-1<<endl;
                    return;
                }
            }
        }
    }
    for(auto x:v) cout<<x<<" ";
    cout<<endl;
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