#include<bits/stdc++.h>
using namespace std;

int f(int n){
	if (n/10==0)
		return n;
	else return (n%10)+f(n/10);
}
int main(){
	int n;
	cin>>n;
	while(f(n)%4!=0)
		n++;
	cout<<n;
	return 0;
}