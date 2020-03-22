#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for (int i = 0; i < int(n); i++)

int main(){
	int n,temp;
	cin>>n;
	vector<pair<int,int> > a;

	a.resize(n);
    forn(i, n) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end());

    int zeros=0,i;

    for(i=0;i<n;i++){
    	if(a[i].first<0)
    		continue;
    	else if(a[i].first==0)
    		zeros++;
    	else break;
    }

    int negs=i-zeros;

    for (int j = negs ; j < i; j++){
    	a[j].first=-1;
    }
    for(int j = i ; j < n; j++){
    	a[j].first=-a[j].first-1;
    }

    if(n%2){
    	sort(a.begin(), a.end());
    	a[0].first=-a[0].first-1;

    }

    forn(i,n){
    	temp=a[i].first;
    	a[i].first=a[i].second;
    	a[i].second=temp;
    }

    sort(a.begin(),a.end());

    forn(i,n){
    	cout<<a[i].second<<" ";
    }

	return 0;
}