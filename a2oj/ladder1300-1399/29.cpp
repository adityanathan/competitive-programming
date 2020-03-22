#include<bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	cin>>a>>b;
	for(int i=0;a[i]&&b[i];i++){
		if(a[i]!=b[b.length()-1-i]){
			cout<<"NO";
			return 0;
		}
	}
	
	cout<<"YES";
	return 0;
}