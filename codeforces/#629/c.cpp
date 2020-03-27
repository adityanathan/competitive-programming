#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
 
int main(){
	long long n,t;
	bool bb;
	string x;

	cin>>t;

	while(t--){
		cin>>n>>x;
		bb=false;
		string a="1",b="1";
		for(int i=1;i<n;i++){
			if (x[i]=='2'){
				if(bb){
					a+='0';
					b+='2';
					continue;
				}
				a+='1';
				b+='1';
			}
			else if(x[i]=='1'){
				if(bb){
					a+='0';
					b+='1';
					continue;
				}
				a+='1';
				b+='0';
				bb=true;
			}
			else {
				a+='0';
				b+='0';
			}

		}
		cout<<a<<"\n"<<b<<"\n";

	}
	return 0;
}
