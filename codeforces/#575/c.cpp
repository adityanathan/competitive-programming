#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)


int main(){
	int q,n,k,scorem;
	char rgb[3]={'R','G','B'};
	
	cin>>q;
	while(q--){
		cin>>n>>k;


		vector<vector<int> > score(3,vector<int> (n+1,0));
		string s;
		cin>>s;

		if(k==1){
			cout<<"0\n";
			continue;
		}


		scorem=1000000000;
		if(rgb[0]!=s[0])
			score[0][1]++;
		if(rgb[1]!=s[0])
			score[1][1]++;
		if(rgb[2]!=s[0])
			score[2][1]++;

		for(int i=1;i<n;i++){
			score[0][i+1]=score[0][i];
			score[1][i+1]=score[1][i];
			score[2][i+1]=score[2][i];
			if(rgb[i%3]!=s[i])
				score[0][i+1]++;
			if(rgb[(i+1)%3]!=s[i])
				score[1][i+1]++;
			if(rgb[(i+2)%3]!=s[i])
				score[2][i+1]++;
			if(i>=k-1)
				scorem=min(scorem,min(    min(   score[0][i+1]-score[0][i+1-k],score[1][i+1]-score[1][i+1-k])   , score[2][i+1]-score[2][i+1-k])   );
		}

		cout<<scorem<<"\n";
	}
	return 0;
}