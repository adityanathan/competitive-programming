#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int main(){
	int n,x;
	cin>>n;
	vector<int> a(150002,0),b(150002,0);
	forn(i,n){
		cin>>x;
		a[x]++;
	}
	int count=0;
	for(int i=150000;i>1;i--){
		if(a[i]>2){
			if(b[i+1]==0){
				count++;
				b[i+1]=1;
			}
			if(b[i]==0){
				count++;
				b[i]=1;
			}
			if(b[i-1]==0){
				count++;
				b[i-1]=1;
			}
		}
		else if(a[i]==2){
			if(b[i+1]==0){
				count++;
				a[i]--;
				b[i+1]=1;
			}
			if(b[i]==0){
				count++;
				a[i]--;
				b[i]=1;
			}
			if(a[i]>0){
				if(b[i-1]==0){
					count++;
					b[i-1]=1;
				}
			}
		}
		else if(a[i]==1){
			if(b[i+1]==0){
				count++;
				a[i]--;
				b[i+1]=1;
			}
			else if(b[i]==0){
				count++;
				a[i]--;
				b[i]=1;
			}
			else if(b[i-1]==0){
					count++;
					b[i-1]=1;
				}
		}
	}
	int i=1;
	if(a[i]>2){
			if(b[i+1]==0){
				count++;
				b[i+1]=1;
			}
			if(b[i]==0){
				count++;
				b[i]=1;
			}
		}
		else if(a[i]==2){
			if(b[i+1]==0){
				count++;
				a[i]--;
				b[i+1]=1;
			}
			if(b[i]==0){
				count++;
				a[i]--;
				b[i]=1;
			}
		}
		else if(a[i]==1){
			if(b[i+1]==0){
				count++;
				a[i]--;
				b[i+1]=1;
			}
			else if(b[i]==0){
				count++;
				a[i]--;
				b[i]=1;
			}
		}
	
	cout<<count;

	return 0;
}