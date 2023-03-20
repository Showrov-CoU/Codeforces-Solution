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

vector v[300005];
vector g[300005];
ll node,edge,k;

int main() 
{
    FAST
    cin>>node>>edge>>k;
    bool ab[node+2]={false};
    int a,b;
    for(int i=1;i<=edge;i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=1;i<=1;i++){
        ab[i]=true;
        for(int j=0;j<v[j].size();j++){
            ab[v[i][j]]=true;
        }
        for(int k=1;k<=node;k++){
            if(ab[k]==false) g[i].push_back(k);   
        }
        //ab[node+2]={false};
    }
    for(int i=1;i<=node;i++){
        cout<<i<<"--";
       for(int j=0;j<v[j].size();j++){
           cout<<g[i][j]<<" ";
       } 
       cout<<endl;
    }
    
    return 0;
}