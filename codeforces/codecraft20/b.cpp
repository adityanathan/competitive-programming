#include<bits/stdc++.h>

using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

string reverseStr(string str) 
{ 
    int n = str.length(); 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]);
       return str; 
} 

int main(){
	int n,t,k;
	cin>>t;

	while(t--){
		cin>>n;
		string s,small,next;
		cin>>s;
		small=s;
		k=1;
		if(n==1){
			cout<<small<<"\n"<<k<<"\n";
			continue;
		}
		forn(i,n){
			next=s.substr(i,n-i);
			if((n-i)%2==1)
				next+=reverseStr(s.substr(0,i));
			else next+=s.substr(0,i);
			if(small>next){
				small=next;
				k=i+1;
			}
		}

		cout<<small<<"\n"<<k<<"\n";
	}
	return 0;
}