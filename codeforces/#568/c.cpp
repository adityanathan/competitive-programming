
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m,x,out,prev;
	
	cin>>n>>m;
	

		

		cin>>x;
	
	
	vector<int> v={};
	make_heap(v.begin(), v.end());
	out=0;
	cout<<out<<" ";
	prev=x;
	int sum=x;
	for(int i=1;i<n;i++){
		out=0;
		cin>>x;
		v.push_back(prev);
		push_heap(v.begin(), v.end());
		vector<int> v1=v;
		sum+=x;
		int sum2=sum;
		while(sum2>m){
			sum2-=v1.front();
			out++;
			pop_heap(v1.begin(), v1.end()); 
			v1.pop_back(); 
		}
		cout<<out<<" ";
		prev=x;
	}
	return 0;
}
