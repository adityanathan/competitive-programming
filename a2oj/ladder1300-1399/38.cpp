#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

bool isLucky(string s){
	forn(i,s.length()){
		if(s[i]!='4' && s[i]!='7')
			return false;
	} return true;
}
int main(){
	int n;
	cin>>n;
	for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            if (n/i == i) 
                {if(isLucky(to_string(i)))
               	{
               		cout<<"YES";
               		return 0;
               	}}
  
            else if(isLucky(to_string(i)) || isLucky(to_string(n/i)))
            	{
               		cout<<"YES";
               		return 0;
               	}
        }  
    } 
    cout<<"NO";
	return 0;
}
