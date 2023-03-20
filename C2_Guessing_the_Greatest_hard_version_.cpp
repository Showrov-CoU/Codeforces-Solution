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

int q(int l,int r){
    if(l>=r) return -1;
    cout<<"? "<<l+1<<" "<<r+1<<endl;
    int x;
    cin>>x;
    return x-1; 
}

int main() 
{
    //FAST
    int n,l,r,smx,mid;
    cin>>n;
    smx=q(0,n-1);
    if(q(0,smx)==smx){
        l=0,r=smx;
        while(r-l>1){
            mid=(l+r)/2;
            if(q(mid,smx)==smx) l=mid;
            else r=mid;
        }
        cout<<"! "<<l+1<<endl;
    }
    else{
        l=smx,r=n-1;
        while(r-l>1){
            mid=(l+r)/2;
            if(q(smx,mid)==smx) r=mid;
            else l=mid;
        }
        cout<<"! "<<r+1<<endl;
    }
    
    return 0;
}