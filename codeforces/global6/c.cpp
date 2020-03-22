#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int r,c;
	cin>>r>>c;
	if(r==1&&c==1)
		{cout<<0;
			return 0;}

	if(r==1){
		while(c--){
			cout<<++r<<" ";
		}
		return 0;
	}
	if(c==1){
		while(r--){
			cout<<++c<<"\n";
		}
		return 0;
	}
	bool b=false;
	int x;
	if(r<c){
		b=true;
		x=r;
		r=c;
		c=x;
	}
	int a[r][c];
	forn(j,c){
		if(j==0){
			forn(i,r)
				a[i][j]=i+2;
		}
		else
		forn(i,r){
			a[i][j]=a[i][0]*(r+1+j);
		}
	}

	if(!b)
	forn(i,r){
		forn(j,c){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	else{
		forn(j,c){
		forn(i,r){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	}


	return 0;
}