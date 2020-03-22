#include <bits/stdc++.h>
using namespace std;

int main()
{   int n;
    cin >>n;
    
    for(int i=0;i<n;i++){
    	
    	unsigned long long int num=0;
    	int n2=0,n3=0,n5=0;
    	cin>>num;
    	while(num%2==0){
    		num/=2;
    		n2++;
    	}
    	while(num%3==0){
    		num/=3;
    		n3++;
    	}
    	while(num%5==0){
    		num/=5;
    		n5++;
    	}
    	if(num!=1) {cout<<"-1 ";
	    	continue;
	    }
	    else cout<<2*n3+3*n5+n2<<" ";

    }
    return 0;
    
}