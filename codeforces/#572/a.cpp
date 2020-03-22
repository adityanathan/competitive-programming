#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,count[2];string s;
	cin>>n>>s;
	count[0]=count[1]=0;

	for(int i=0;i<n;i++){
		count[((int)s[i])-48]++;
	}

	if(count[0]!=count[1]){

		cout<<1<<"\n"<<s;
		return 0;
	}
	cout<<2<<"\n"<<s[0];cout<<" ";
	int i=1;

	while(s[i]){
		cout<<s[i];
		i++;
	}
	return 0;
}