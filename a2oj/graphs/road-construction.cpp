#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, a, b;
	cin>>n>>m;
	vector<vector<int>> cannot(n);
	for(int i=0;i<m;i++)
		cin>>a>>b, cannot[a-1].push_back(b-1), cannot[b-1].push_back(a-1);
	for(int i=0;i<n;i++)
		if(!cannot[i].size()){
			cout<<n-1<<'\n';
			for(int j=0;j<n;j++)
				if(j!=i)
					cout<<i+1<<' '<<j+1<<'\n';
			return 0;
		}
}