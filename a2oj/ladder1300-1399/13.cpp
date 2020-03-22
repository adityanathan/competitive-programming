#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int r,c,cntr=0,cntc=0;
	char a;
	cin>>r>>c;
	bool row[r],col[c];

	forn(i,r)
		row[i]=false;
	forn(i,c)
		col[i]=false;

	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++){
			cin>>a;
			// cout<<"("<<i<<"."<<j<<") ";
			if(a=='S'){
				row[i]=col[j]=true;
			}
		}
	forn(i,r){
		if(row[i])
			cntr++;
	}
	forn(i,c){
		if(col[i])
			cntc++;
	}
	//cout<<cntr<<" "<<cntc<<"\n";
	cout<<(r-cntr)*c+(c-cntc)*(cntr);
	return 0;
}