#include<iostream>

int main(){
	int n,a,b;
	std::cin>>n>>a>>b;
	std::cout<<n-a-std::max(0,n-a-1-b);
}