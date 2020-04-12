mkdir $1
cd $1
open .
echo "#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

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
" >> a.cpp >> b.cpp