#include<bits/stdc++.h>
using namespace std;

int main(){
	int r,c,x;
	cin>>r>>c;
	long long int sum=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>x;
			int ans=0;
			while(x%2==0){
				ans=2;
				n=n/2;
			}

			for(int i = 3; i <= sqrt(x); i += 2) { 
		        while (x % i == 0) { 
		        	x = x/ i;
		            ans = i;  
		        } 
		    } 

		    if(x>2) ans= x;
		    sum+=ans;
		}
	}


	int score = (sum* r* c);
	return 0;
}
