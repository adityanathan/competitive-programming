#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d,mini,midi,maxi,ans=0;
	cin>>a>>b>>c>>d;
		
	mini=min(a,min(b,c));
	maxi=max(a,max(b,c));
	if(mini!=a)
	midi=min(a,max(b,c));
	else midi=min(b,c);
	
	if(abs(midi-maxi)<d)
	ans+=abs(midi-maxi)-d;
	
	if(abs(midi-mini)<d)
	ans+=abs(midi-mini)-d;
	
	
	cout<<0-ans;

	
	return 0;
}
