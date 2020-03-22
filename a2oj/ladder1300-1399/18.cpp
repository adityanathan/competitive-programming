#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,m,i=1;
	cin>>n>>m;
	while(true){
		if(m-(i%n+1)<0)
			break;
		m-=i%n+1;
		i++;
	}
	cout<<m;
	return 0;
}