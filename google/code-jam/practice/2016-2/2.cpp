#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

vector<float> p;

float dp(int k, int i){
	vector<float> v(v.size()-i+1);
	if(i==v.size()-1){
		vector<float> v(2);
		v[0] = 1 - p[i];
		v[1] = p[i];
		return v;
	}
	return dp(k,i)
}

int main(){
	int t,n,test,k;
	float ans;
	cin>>test;
	t=test;
	while(t--){
		cin>>n>>k;
		p = vector<float> (n);
		forn(i,n)
			cin>>p[i];

		ans = dp(k,0);
		cout<<"Case #"<<test-t<<": "<<n<<"\n";
	}
	return 0;
}