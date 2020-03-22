#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,a;
	bool flag=false;
	cin>>n;
	vector<int> v={},vv={};
	map <int,int> m;
	while(n--){
		cin>>a;
		v.push_back(a);
		vv.push_back(a);
	}

	sort(v.begin(),v.end());
	map<int,int>::iterator it;
	
	for (int i=1;i<v.size();i++){
		a=v[i]-v[i-1];
		if(m.find(a)==m.end())
			m[a]=1;
		else m[a]++;
	}
	
	for (it = m.begin(); it != m.end(); ++it ){
		cout<<it->first<<":"<<it->second<<", ";
	}
	
	
	for (it = m.begin(); it != m.end(); ++it )
    if (it->second == n-3){flag=true; break;}
	if(flag) {
		cout<<"case1 ";
		int i=1; 
		while(v[i]-v[i-1]==it->first && i<n)
		{i++;}
		a=v[i];
		
			cout<<"found "<<a<<" at "<<i;
		if(v[i+1]-v[1-1]==it->first){
			i=0;
			while(vv[i]!=a){i++;}
			cout<<i+1; return 0;
		}
		cout<<-1;return 0;
	}
	for (it = m.begin(); it != m.end(); ++it )
    if (it->second == n-1){cout<<"case2 ";cout<<1; return 0;}
    
    for (it = m.begin(); it != m.end(); ++it )
    if (it->second == n-2){break;}
    int i=1;
    while(v[i]-v[i-1]==it->first && i<n)
	{i++;}
	if(i==n) {cout<<"case3 ";a=v[i-1]; i=0;while(vv[i]!=a){i++;}
			cout<<i+1; return 0;}
	if(i==2) {cout<<"case4 ";a=v[0]; i=0;while(vv[i]!=a){i++;}
			cout<<i+1; return 0;}
	cout<<-1;
	
    
	
	return 0;
}

