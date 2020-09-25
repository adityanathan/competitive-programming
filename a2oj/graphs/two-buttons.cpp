#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	vector<int> dist(1e5,1e9);
	cin>>n>>m;
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
	dist[n]=0;
	pq.push({dist[n],n});
	while(pq.size()){
		n=pq.top().second, pq.pop();
		if(n==m){
			cout<<dist[n];
			return 0;
		}
		if(2*n<1e5 && dist[2*n]>dist[n]+1)
			dist[2*n]=dist[n]+1, pq.push({dist[2*n],2*n});
		if(n>=1 && dist[n-1]>dist[n]+1)
			dist[n-1]=dist[n]+1, pq.push({dist[n-1],n-1});
	}
}