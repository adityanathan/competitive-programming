#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < (n); ++i)
int main(){
	int a;
	forn(i,5){
		forn(j,5)
			{
				cin>>a;
				if(a) {cout<<abs(i-2)+abs(j-2);break;}
			}
	}
}

