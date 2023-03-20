#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin>>t;
	
	while(t--){
		map<int,int>mp,gr;
		int ans=1e9;
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			mp[x]++;
			gr[mp[x]]++;
		}
        for(auto i:gr) ans=min(ans,n-(i.first*i.second));
        cout<<ans<<endl;
	}
    return 0;
}