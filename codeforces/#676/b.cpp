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
    int n,t;
    cin>>t;

    while(t--){
        cin>>n;
        vector<string> s(n);
        forn(i,0,n)
        	cin>>s[i];
        if(s[0][1]=='1'&&s[1][0]=='1'&&s[n-1][n-2]=='1'&&s[n-2][n-1]=='1'){
        	cout<<"2\n1 2\n2 1\n";
        	continue;
        }
        if(s[0][1]=='0'&&s[1][0]=='0'&&s[n-1][n-2]=='0'&&s[n-2][n-1]=='0'){
        	cout<<"2\n1 2\n2 1\n";
        	continue;
        }
        if(s[0][1]=='0'&&s[1][0]=='0'&&s[n-1][n-2]=='1'&&s[n-2][n-1]=='1'){
        	cout<<"0\n";
        	continue;
        }
        if(s[0][1]=='1'&&s[1][0]=='1'&&s[n-1][n-2]=='0'&&s[n-2][n-1]=='0'){
        	cout<<"0\n";
        	continue;
        }


        if(s[0][1]=='1'&&s[1][0]=='1'&&s[n-1][n-2]=='1'&&s[n-2][n-1]=='0'){
        	cout<<"1\n"<<n<<' '<<n-1<<'\n';
        	continue;
        }
        if(s[0][1]=='1'&&s[1][0]=='1'&&s[n-1][n-2]=='0'&&s[n-2][n-1]=='1'){
        	cout<<"1\n"<<n-1<<' '<<n<<'\n';
        	continue;
        }
        if(s[0][1]=='0'&&s[1][0]=='0'&&s[n-1][n-2]=='1'&&s[n-2][n-1]=='0'){
        	cout<<"1\n"<<n-1<<' '<<n<<'\n';
        	continue;
        }
        if(s[0][1]=='0'&&s[1][0]=='0'&&s[n-1][n-2]=='0'&&s[n-2][n-1]=='1'){
        	cout<<"1\n"<<n<<' '<<n-1<<'\n';
        	continue;
        }


        if(s[0][1]=='1'&&s[1][0]=='0'&&s[n-1][n-2]=='1'&&s[n-2][n-1]=='1'){
        	cout<<"1\n"<<1<<' '<<2<<'\n';
        	continue;
        }
        if(s[0][1]=='0'&&s[1][0]=='1'&&s[n-1][n-2]=='1'&&s[n-2][n-1]=='1'){
        	cout<<"1\n"<<2<<' '<<1<<'\n';
        	continue;
        }
        if(s[0][1]=='1'&&s[1][0]=='0'&&s[n-1][n-2]=='0'&&s[n-2][n-1]=='0'){
        	cout<<"1\n"<<2<<' '<<1<<'\n';
        	continue;
        }
        if(s[0][1]=='0'&&s[1][0]=='1'&&s[n-1][n-2]=='0'&&s[n-2][n-1]=='0'){
        	cout<<"1\n"<<1<<' '<<2<<'\n';
        	continue;
        }


        if(s[0][1]=='1'&&s[1][0]=='0'&&s[n-1][n-2]=='1'&&s[n-2][n-1]=='0'){
        	cout<<"2\n"<<n<<' '<<n-1<<"\n2 1\n";
        	continue;
        }
        if(s[0][1]=='0'&&s[1][0]=='1'&&s[n-1][n-2]=='0'&&s[n-2][n-1]=='1'){
        	cout<<"2\n"<<n<<' '<<n-1<<"\n2 1\n";
        	continue;
        }
        if(s[0][1]=='1'&&s[1][0]=='0'&&s[n-1][n-2]=='0'&&s[n-2][n-1]=='1'){
        	cout<<"2\n"<<n<<' '<<n-1<<"\n1 2\n";
        	continue;
        }
        if(s[0][1]=='0'&&s[1][0]=='1'&&s[n-1][n-2]=='1'&&s[n-2][n-1]=='0'){
        	cout<<"2\n"<<n<<' '<<n-1<<"\n1 2\n";
        	continue;
        }
    }
    return 0;
}