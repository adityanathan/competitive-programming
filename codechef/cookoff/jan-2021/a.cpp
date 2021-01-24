#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    string s;
    cin>>t;

    while(t--){
        cin>>s;
        bool b1=false,b2=false,b3=false,b4=false;
        for(int i=0;i<s.size();i++)
        	if(s[i]<='z'&&'a'<=s[i])
        		b1=true;
        	else if(s[i]<='Z'&&'A'<=s[i] && i&&i<s.size()-1)
        		b2=true;
        	else if(s[i]<='9'&&'0'<=s[i] && i&&i<s.size()-1)
        		b3=true;
        	else if((s[i]=='@'||s[i]=='#'||s[i]=='%'||s[i]=='&'||s[i]=='?') && i && i<s.size()-1)
        		b4=true;

        cout<<(b1&&b2&&b3&&b4&&s.size()>=10?"YES":"NO")<<'\n';
    }
    return 0;
}