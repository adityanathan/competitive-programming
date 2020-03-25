#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
 
int main(){
	long long n,m,k;

	cin>>n>>m>>k;
	vector<int> sx(k),sy(k),fx(k),fy(k);

	forn(i,k){
		cin>>sx[i]>>sy[i];
	}
	forn(i,k){
		cin>>fx[i]>>fy[i];
	}

		if(m-1 + n-1 + (m-1)*n +(n-1)>2*m*n){
			cout<<"-1";
			return 0;
		}
		cout<<m-1 + n-1 + (m-1)*n +(n-1) <<"\n";
		forn(i,m-1)
			cout<<"L";
		forn(i,n-1)
			cout<<"U";
		int i;
		for(i=0;i<m-1;i++){
			if(i%2==0)
				forn(j,n-1){
					cout<<"D";
				}
			else
				forn(j,n-1){
					cout<<"U";
				}
			cout<<"R";
		}
		if(i%2==0)
			forn(j,n-1){
				cout<<"D";
			}
		else
			forn(j,n-1){
				cout<<"U";
			}

	return 0;
}
