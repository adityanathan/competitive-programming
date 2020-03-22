#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,t;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		if(n<6){
			cout<<"0 0 0\n";
			continue;
		}
		int mid=a[n/2],midi=n/2,g=0,gold=a[0],silver,s=0;
		while(g<midi && a[g]==gold)
			g++;
		if(midi==g){
			cout<<"0 0 0\n";
			continue;
		}
		s=g; silver=a[g];
		while(s<midi && (a[s]==a[s-1] || s<=2*g ))
			s++;
		if(midi==s){
			cout<<"0 0 0\n";
			continue;
		}
		// s-=g;
		while(midi>=s && a[midi]==mid){
			midi--;
		}

		if(midi<s){
			cout<<"0 0 0\n";
			continue;
		}

		s-=g;
		int b=midi+1-g-s;
		if(g>=s ||g>=b){
			cout<<"0 0 0\n";
			continue;
		}
		cout<<g<<" "<<s<<" "<<b<<"\n";
	}
	return 0;
}