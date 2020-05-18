#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int a[3][3];

bool check(){
	int sum=a[0][0]+a[0][1]+a[0][2];
	if(a[1][0]+a[1][1]+a[1][2]!=sum || a[2][0]+a[2][1]+a[2][2]!=sum)
		return false;
	if(a[0][0]+a[1][0]+a[2][0]!=sum || a[0][1]+a[1][1]+a[2][1]!=sum || a[0][2]+a[1][2]+a[2][2]!=sum)
		return false;
	return a[0][0]+a[1][1]+a[2][2]==sum && a[0][2]+a[1][1]+a[2][0]==sum;
}

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	

	forn(i,3)
		forn(j,3){
			cin>>a[i][j];
		}
	forn(x,100001){
		if(x+a[0][1]+a[0][2]-a[1][0]-a[1][2]<=0 || x+a[0][1]+a[0][2]-a[1][0]-a[1][2]>100000)
			continue;
		if(a[0][2]+a[2][0]-x<=0 || a[0][2]+a[2][0]-x>100000)
			continue;

		a[0][0]=x;
		a[2][2]=a[0][2]+a[2][0]-x;
		a[1][1]=x+a[0][1]+a[0][2]-a[1][0]-a[1][2];

		if(check())
			break;
	}

	forn(i,3){
		forn(j,3){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}


