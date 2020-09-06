#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(x...) 141
#endif
#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t,k;
    string s;
    cin>>t;

    while(t--){
        cin>>n>>k>>s;
        map<char,queue<int>> m;
        bool flag=true;
        int i=0;
        debug(s);
        while(i<k)
        	m[s[i++]].push(i);
        while(i<n){
        	if(abs((int)m['0'].size()-(int)m['1'].size())>m['?'].size())
        		flag=false;
        	else if(s[i-k]=='0' && s[i]=='1' || s[i-k]=='1' && s[i]=='0')
        		flag=false;
        	if(m['0'].size()==0)
        		while(m['0'].size()<k/2)
        			s[m['?'].front()]='0', m['0'].push(m['?'].front()), m['?'].pop();
        	if(m['1'].size()==0)
        		while(m['1'].size()<k/2)
        			s[m['?'].front()]='0', m['1'].push(m['?'].front()), m['?'].pop();
        	if(s[i-k]=='?' && s[i]!='?')
        		s[i-k]=s[i];
        	m[s[i-k]].pop(), m[s[i++]].push(i);
        }
        if(abs((int)m['0'].size()-(int)m['1'].size())>m['?'].size())
        		flag=false;

        i=n-1;
        m.clear();
        debug(s);
        while(i>n-k-1)
        	m[s[i--]].push(i);
        while(i>=0){
        	if(abs((int)m['0'].size()-(int)m['1'].size())>m['?'].size())
        		flag=false;
        	else if(s[i+k]=='0' && s[i]=='1' || s[i+k]=='1' && s[i]=='0')
        		flag=false;
        	if(m['0'].size()==0)
        		while(m['0'].size()<k/2)
        			s[m['?'].front()]='0', m['0'].push(m['?'].front()), m['?'].pop();
        	if(m['1'].size()==0)
        		while(m['1'].size()<k/2)
        			s[m['?'].front()]='0', m['1'].push(m['?'].front()), m['?'].pop();
        	if(s[i+k]=='?' && s[i]!='?')
        		s[i+k]=s[i];
        	m[s[i+k]].pop(), m[s[i--]].push(i);
        }
        if(abs((int)m['0'].size()-(int)m['1'].size())>m['?'].size())
        		flag=false;

        i=0;
        m.clear();
        debug(s);
        while(i<k)
        	m[s[i++]].push(i);
        while(i<n){
        	if(abs((int)m['0'].size()-(int)m['1'].size())>m['?'].size())
        		flag=false;
        	else if(s[i-k]=='0' && s[i]=='1' || s[i-k]=='1' && s[i]=='0')
        		flag=false;
        	m[s[i-k]].pop(), m[s[i++]].push(i);
        }
        if(abs((int)m['0'].size()-(int)m['1'].size())>m['?'].size())
        		flag=false;

        cout<<(flag?"YES":"NO")<<'\n';
    }
    return 0;
}