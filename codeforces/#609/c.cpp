#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

bool grteq(string a, string b){
	for(int i=0; a[i]!='\0' &&  b[i]!='\0' ; i++){
		if((a[i]-'0')<(b[i]-'0'))
			return false;
		else if((a[i]-'0')>(b[i]-'0'))
			break;
	}
	return true;
}

string inc(string a){
	if(a[a.length()-1]!='9'){
		a[a.length()-1]++;
		return a;
	}
	for(int i=a.length()-1;i>=0; i--){
		if((a[i]!='9')){
			a[i]++;
			return a;
		}
		a[i]='0';
	}
	return a;
}


int main(){
	int n,k,i=0;
	bool flag=false;

	cin>>n>>k;

	string a,sten;

	cin>>a;

	sten=a.substr(0,k);

	while(i-1<n){
		if(!grteq(sten,a.substr(i,k))){
			flag=true;
			break;
		}
		if(grteq(sten,a.substr(i,k)) && sten!=a.substr(i,k))
			break;
		i+=k;
	}

	if(flag){
		sten=inc(sten);
	}
	cout<<n<<"\n";
	forn(i,n/k)
		cout<<sten;
	cout<<sten.substr(0,n%k);

	return 0;
}