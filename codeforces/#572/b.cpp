#include <bits/stdc++.h>
using namespace std;

int rem(int a,int b){
	if(a>0) return a%b;
	else return (3*b+a)%b;
}
int main(){
	int n;
	cin>>n;
	vector <int> a(n,0),b(n,0);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());

	for(int j=0;j<n;j+=2){
		b[j/2]=a[j];
	}
	for(int j=1;j<n;j+=2){
		b[n-(1+j)/2]=a[j];
	}
	int flag=true;
	for(int i=0;i<n;i++){
		if(b[i]>=b[(i+1)%n]+b[(i-1)%n]){
			flag=false;break;
		}
	}
	if(flag) {cout<<"YES\n"; for(int i=0;i<n;i+=1){
		cout<<b[i]<<" ";
	} return 0;}
	cout<<"NO";
	return 0;
}