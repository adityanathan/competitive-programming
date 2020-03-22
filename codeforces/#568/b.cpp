#include <bits/stdc++.h>
#include <regex>
using namespace std;

int main(){
	int n;
	bool flag=true;
	string a,b;
	cin>>n;
		
	while(n--){
		int i=0,j=0,counta=0,countb=0;
		flag=true;
		cin>>a>>b;
		while(a[i]){
			char c=a[i];
			while(b[j]==c && b[j]){
				countb++;j++;
			}
			while(a[i]==c && a[i]){
				counta++;i++;
			}
			if(countb<counta) {printf("NO\n"); flag=false;break;}
		}
		if(flag && !b[j]) printf("YES\n");
		else if(flag) printf("NO\n");
	}

	
	return 0;
}
