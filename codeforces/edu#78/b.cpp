#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,a,b,x,count;
	
	cin>>n;

	while(n--){
		cin>>a>>b;
		x=abs(a-b);
		count=(int)sqrt(x);
		// if(x-count*(count+1)/2 < (count+1)*(count+2)/2-x)
		if((count+1)*(count+2)/2-x==0)
			count+=1;
		else
			count+=2*(x-count*(count+1)/2);
		// else count+=(count+1)*(count+2)/2-x+1;
		cout<<count<<"\n";
	}

	

	return 0;
}