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

/*void solve(){
    string s;
    cin>>s;
	int ans=10;
{
	int me=0,his=0,mybaki=5,hisbaki=5;
	for(int i=0;i<10;i++){
		if(i%2==0){
			mybaki--;
			if(s[i]!='0') me++;
		}
		else{
			hisbaki--;
			if(s[i]=='1') his++;
		}
		if(me+mybaki<his || his+hisbaki<me) ans=min(ans,i+1);
	}
}

{
	int me=0,his=0,mybaki=5,hisbaki=5;
	for(int i=0;i<10;i++){
		if(i%2==0){
			mybaki--;
			if(s[i]=='1') me++;
		}
		else{
			hisbaki--;
			if(s[i]!='0') his++;
		}
		if(me+mybaki<his || his+hisbaki<me) ans=min(ans,i+1);
	}
}
    cout<<ans<<endl;
}*/

string s,ss;
int ans;
void calculate(){
    int me=0,his=0,mybaki=5,hisbaki=5;
	for(int i=0;i<10;i++){
		if(i%2==0){
			mybaki--;
			if(s[i]=='1') me++;
		}
		else{
			hisbaki--;
			if(s[i]=='1') his++;
		}
		if(me+mybaki<his || his+hisbaki<me) ans=min(ans,i+1);
	}
	//cout<<ans<<endl;
}

int call(int pos){
	if(pos==10) calculate();
	else if(s[pos]=='?'){
		s[pos]='1';
		call(pos+1);
		s[pos]='0';
		call(pos+1);
		s[pos]='?';
	}
	else call(pos+1);
}

void solve(){
	cin>>s;
	call(0);
	cout<<ans<<endl;
}

int main() 
{
    FAST
    int t;
    cin>>t;
    while(t--)
    {
        ans=10;
		solve();        
    }
    return 0;
}