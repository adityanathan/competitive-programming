#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

vector<int> pf(int n)  
{  
    vector<int> v;
    while (n % 2 == 0)  
    {  
        v.push_back(2); 
        n = n/2;  
    }  
  
    // n must be odd at this point. So we can skip  
    // one element (Note i = i +2)  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        // While i divides n, print i and divide n  
        while (n % i == 0)  
        {  
            v.push_back(i); 
            n = n/i;  
        }  
    }  

    if (n > 2)  
        v.push_back(n); 
    return v;
}  

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	int n,a,mins,minsec;
	vector<int> v;
	cin>>n;
	unordered_map<int,int> m;
	vector<unordered_map<int,int> > vm;

	forn(i,n){
		unordered_map<int,int> mm;
		cin>>a;
		v = pf(a);
		for(int x:v)
			mm[x]++;
		vm.push_back(mm);
		forit(it,mm)
			m[it->first]++;
	}
	long long ans=1;
	forit(it,m){
		if(it->second>=n-1){
			mins=100000000;
			forn(i,n)
				mins=min(mins,vm[i][it->first]);
			minsec=100000004;
			bool b=false;
			forn(i,n){
				minsec=vm[i][it->first]>mins || b?min(minsec,vm[i][it->first]):minsec;
				if(vm[i][it->first]==mins)
					b=true;
			}
			if(minsec==100000004)
				minsec=mins;
			ans*=pow(it->first,minsec);
		}
	}
	cout<<ans<<endl;
	return 0;
}


