#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
 
int main(){
	int t,a,b,c,d,x1,x2,y1,y2,x,y;

	cin>>t;

	while(t--){
		cin>>a>>b>>c>>d>>x>>y>>x1>>y1>>x2>>y2;
		if(x>x2 || x<x1 || y>y2 || y<y1){
			cout<<"No\n";
			continue;
		}
		if((x1==x2 && a+b>0 )||  (y1==y2 && c+d>0)){
			cout<<"No\n";
			continue;
		}
		if(x+(b-a)>x2 || x+(b-a)<x1 || y+(d-c)>y2 || y+d-c<y1){
			cout<<"No\n";
			continue;
		}
		cout<<"Yes\n";
	}
	return 0;
}
