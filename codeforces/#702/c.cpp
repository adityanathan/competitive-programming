#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,t;
    cin>>t;
	set<long long> s;
    for(long long i=1;i<1e4+5;i++)
    	s.insert(i*i*i);
    while(t--){
        cin>>n;
        bool b=false;
        for(long long i=1;i<1e4+5;i++)
        	if(s.count(n-i*i*i))
        		b=true;
        cout<<(b?"YES":"NO")<<'\n';
    }
    return 0;
}