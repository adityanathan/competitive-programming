#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(x...) 041
#endif
#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string s;
    cin>>n>>s;
    map<int,vector<int>> m;
    forn(i,0,n)
    	m[s[i]-'0'].push_back(i);
    if((m[0].size()>n/3)+(m[1].size()>n/3)+(m[2].size()>n/3)==1){
    	if(m[0].size()>n/3){
    		int i=m[0].size()-1;
    		while(m[2].size()<n/3)
    			s[m[0][i]]='2',m[2].push_back(m[0][i]),i--;
			while(m[1].size()<n/3)
    			s[m[0][i]]='1',m[1].push_back(m[0][i]),i--;        		

    	}
    	if(m[1].size()>n/3){
    		int i=m[1].size()-1;
    		while(m[2].size()<n/3)
    			s[m[1][i]]='2',m[2].push_back(m[1][i]),i--;
    		i=0;
			while(m[0].size()<n/3)
    			s[m[1][i]]='0',m[0].push_back(m[1][i]),i++;        		

    	}
    	if(m[2].size()>n/3){
    		int i=0;
    		while(m[0].size()<n/3)
    			s[m[2][i]]='0',m[0].push_back(m[2][i]),i++;
			while(m[1].size()<n/3)
    			s[m[2][i]]='1',m[1].push_back(m[2][i]),i++;
    	}
    }
    else if((m[0].size()>n/3)+(m[1].size()>n/3)+(m[2].size()>n/3)==2){
    	if(m[0].size()<n/3){
    		int i=0;
    		while(m[1].size()-i>n/3)
    			s[m[1][i]]='0',i++;
    		i=0;
    		while(m[2].size()-i>n/3)
    			s[m[2][i]]='0',i++;
    	}
    	if(m[1].size()<n/3){
    		int i=0;
    		while(m[2].size()-i>n/3)
    			s[m[2][i]]='1',i++;
    		i=m[0].size()-1;
			while(m[0].size()>n/3)
    			s[m[0][i]]='1',m[0].pop_back(),i--;        		

    	}
    	if(m[2].size()>n/3){
    		int i=m[1].size()-1;
			while(m[1].size()>n/3)
    			s[m[1][i]]='2',m[1].pop_back(),i--;   
    		i=m[0].size()-1;
			while(m[0].size()>n/3)
    			s[m[0][i]]='2',m[0].pop_back(),i--;   
    	}
    }
	else{
		if(m[0].size()==n/3){
			int i=m[1].size()-1;
			while(m[1].size()>m[2].size())
				s[m[1][i]]='2',i--,m[2].push_back(m[1][i]),m[1].pop_back();
			i=0;
			while(m[1].size()<m[2].size()-i)
				s[m[2][i]]='1',i++,m[1].push_back(m[2][i]);
		}
		if(m[1].size()==n/3){
			int i=m[0].size()-1;
			while(m[0].size()>m[2].size())
				s[m[0][i]]='2',i--,m[2].push_back(m[0][i]),m[0].pop_back();
			i=0;
			while(m[0].size()<m[2].size()-i)
				s[m[2][i]]='0',i++,m[0].push_back(m[2][i]);
		}
		if(m[2].size()==n/3){
			int i=m[0].size()-1;
			while(m[0].size()>m[1].size())
				s[m[0][i]]='1',i--,m[1].push_back(m[0][i]),m[0].pop_back();
			i=0;
			while(m[0].size()<m[1].size()-i)
				s[m[1][i]]='0',i++,m[0].push_back(m[1][i-1]);
		}
	}
    cout<<s;
    
    return 0;
}