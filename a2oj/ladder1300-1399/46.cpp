#include<bits/stdc++.h>
using namespace std;

#define forn(i,n) for(int i=0;i<n;i++)

long long next(int num){
	string s=to_string(num);
	int i=0,n=s.length();
	while(s[i]=='7'||s[i]=='4')
		i++;
	if(i>=n)
		return num;

	if(s[i]<'4')
		while(i<n)
			s[i++]='4';

	else if(s[i]<'7'){
		s[i++]='7';
		while(i<n)
			s[i++]='4';
	}

	else{
		while(i>0 && s[i-1]=='7')
			i--;
		if(i==0){
			string t(n+1,'4');
			return stoll(t);
		}
		s[i-1]='7';
		while(i<n)
			s[i++]='4';
	}
	return stoll(s);
}

int main(){
	int l,r;
		cin>>l>>r;
		long long sum=0;
		while(next(l)<r){
			sum+=(next(l)-l+1)*next(l);
			l=next(l)+1;
		}
		sum+=(r-l+1)*next(l);
		cout<<sum<<"\n";
	return 0;
} 