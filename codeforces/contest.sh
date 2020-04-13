cd /Users/harkiratdhanoa/Desktop/iitd/competitive/codeforces
if [ $# -eq 0 ]; 
then
	open .
	echo "No arguments provided"
else
	mkdir $1
	cd $1


	echo "#include<bits/stdc++.h>
	using namespace std;
	#define forn(i, n) for(int i = 0; i < n; ++i)
	#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

	int main(){
		ios_base::sync_with_stdio(false); 
	    	cin.tie(NULL);   
		int n,t;
		cin>>t;
	
		while(t--){
			cin>>n;
			
			cout<<n<<"\n";
		}
		return 0;
	}
	" | tee -a a.cpp b.cpp c.cpp d.cpp

	open .

	# subl a.cpp

	clear
fi