cd /Users/harkiratdhanoa/Desktop/iitd/competitive/codeforces

if [ $# -ne 0 ]; 
then
	mkdir $1
	cd $1


	echo "#pragma GCC optimize ("Ofast")
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,t;
	cin>>t;

	while(t--){
		cin>>n;
		
		cout<<n<<endl;
	}
	return 0;
}

" | tee -a a.cpp b.cpp c.cpp d.cpp > /dev/null

	# subl a.cpp

fi

clear
open .