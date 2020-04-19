#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef pair<int, int> pi;

string addBinary(string a, string b) 
{ 
    string result = ""; // Initialize result 
    int s = 0;          // Initialize digit sum 
  
    // Traverse both strings starting from last 
    // characters 
    int i = a.size() - 1, j = b.size() - 1; 
    while (i >= 0 || j >= 0 || s == 1) 
    { 
        // Comput sum of last digits and carry 
        s += ((i >= 0)? a[i] - '0': 0); 
        s += ((j >= 0)? b[j] - '0': 0); 
  
        // If current digit sum is 1 or 3, add 1 to result 
        result = char(s % 2 + '0') + result; 
  
        // Compute carry 
        s /= 2; 
  
        // Move to next digits 
        i--; j--; 
    } 
    return result; 
} 

string bin(long long n){
	if (!n)
		return "0";
	string s="";
	while(n){
		s=(char)(n%2+'0')+s;
		n/=2;
	}
	return s;
}

string comp(string b){
	string s="";
	forn(i,b.length()){
		s+=b[i]=='1'?'0':'1';
	}
	return "1"+addBinary(s,"1");
}


int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	long long t,x,y,test,i,j;
	bool b1;
	string xbin,xbin1,ybin1,ybin;
	cin>>test;
	t=test;
	while(t--){
		cin>>x>>y;
		cout<<"Case #"<<test-t<<": ";
		b1=true;
		xbin=bin(abs(x));
		ybin=bin(abs(y));
		i=0;
		while(b1 && i<min(xbin.length(),ybin.length())){
			if(xbin[xbin.length()-1-i]==ybin[ybin.length()-1-i]){
				b1=false;
			}
			i++;
		}
		while(b1 && i<xbin.length()){
			if(xbin[xbin.length()-1-i]=='0')
				b1=false;
			i++;
		}
		while(b1 && i<ybin.length()){
			if(ybin[ybin.length()-1-i]=='0')
				b1=false;
			i++;
		}

		if(b1){
			i=0;j=0;
			while(i<max(xbin.length(),ybin.length())){
				if(i<xbin.length() && xbin[xbin.length()-1-i]=='1'){
					cout<<(x>0?"E":"W");
					i++;
				}
				else if(i<ybin.length()){
					cout<< (y>0?"N":"S");
					i++;
				}
			}
			cout<<"\n";
			continue;
		}

		b1=true;
		xbin1=comp(xbin);
		i=0;
		while(b1 && i<min(xbin1.length(),ybin.length())){
			if(xbin1[xbin1.length()-1-i]==ybin[ybin.length()-1-i]){
				b1=false;
			}
			i++;
		}
		while(b1 && i<xbin1.length()){
			if(xbin1[xbin1.length()-1-i]=='0')
				b1=false;
			i++;
		}
		while(b1 && i<ybin.length()){
			if(ybin[ybin.length()-1-i]=='0')
				b1=false;
			i++;
		}

		if(b1){
			i=0;j=0;
			while(i<max(xbin1.length(),ybin.length())){
				if(i<xbin1.length() && xbin1[xbin1.length()-1-i]=='1'){
					if(i==xbin1.length()-1)
						cout<< (x>0?"E":"W");
					else cout<< (x>0?"W":"E");
					i++;
				}
				else if(i<ybin.length()){
					cout<< (y>0?"N":"S");
					i++;
				}
			}
			cout<<"\n";
			continue;
		}

		b1=true;
		ybin1=comp(ybin);
		i=0;
		while(b1 && i<min(xbin.length(),ybin1.length())){
			if(xbin[xbin.length()-1-i]==ybin1[ybin1.length()-1-i]){
				b1=false;
			}
			i++;
		}
		while(b1 && i<xbin.length()){
			if(xbin[xbin.length()-1-i]=='0')
				b1=false;
			i++;
		}
		while(b1 && i<ybin1.length()){
			if(ybin1[ybin1.length()-1-i]=='0')
				b1=false;
			i++;
		}

		if(b1){
			i=0;j=0;
			while(i<max(xbin.length(),ybin1.length())){
				if(i<xbin.length() && xbin[xbin.length()-1-i]=='1'){
					cout<< (x>0?"E":"W");
				}
				else if(i<ybin1.length()){
					if(i==ybin1.length()-1)
						cout<< (y>0?"N":"S");
					else cout<<(y>0?"S":"N");

				}
				i++;
			}
			cout<<"\n";
			continue;
		}

		b1=true;
		i=0;
		while(b1 && i<min(xbin1.length(),ybin1.length())){
			if(xbin1[xbin1.length()-1-i]==ybin1[ybin1.length()-1-i]){
				b1=false;
			}
			i++;
		}
		while(b1 && i<xbin1.length()){
			if(xbin1[xbin1.length()-1-i]=='0')
				b1=false;
			i++;
		}
		while(b1 && i<ybin1.length()){
			if(ybin1[ybin1.length()-1-i]=='0')
				b1=false;
			i++;
		}

		// if(b1){
		// 	i=0;j=0;
		// 	while(i<max(xbin1.length(),ybin1.length())){
		// 		if(i<xbin1.length() && xbin1[xbin1.length()-1-i]=='1'){
		// 			if(i==ybin1.length()-1)
		// 				cout<< (x>0?"E":"W");
		// 			else cout<< (x>0?"W":"E");
		// 			i++;
		// 		}
		// 		else if(i<ybin1.length()){
		// 			if(i==ybin1.length()-1)
		// 				cout<< (y>0?"N":"S");
		// 			else cout<<(y>0?"S":"N");

		// 			i++;
		// 		}
		// 	}
		// 	cout<<"\n";
		// 	continue;
		// }


		cout<<"IMPOSSIBLE"<<"\n";
	    
	}
	return 0;
}