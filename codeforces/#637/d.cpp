#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

string l[10]={"1110111", "0010010", "1011101", "1011011", "0111010", 
				"1101011", "1101111", "1010010", "1111111", "1111011"};
vector<int> dig(10);

int num(string s){
	int n=0;
	forn(i,7){
		n*=2;
		n+=s[i]-'0';
	}
	return n;
}

pair<int,int> sat(int a){
	pair<int,int> p(-1,10);
	int count,digit;
	forn(i,10){
		if((a&dig[i])!=a)
			continue;
		digit=dig[i]^a;
		count=0;
		while(digit){ 
	        count += digit & 1; 
	        digit >>= 1; 
	    }
	    if(count<=p.second){
	    	cerr<<"sat "<<i<<" "<<count<<"\n";
	    	p=make_pair(i,count);
	    }
	}
	return p;
}

pair<int,int> opt(int aa,int k,bool f){
	cerr<<"opt input: "<<aa<<"\n";
	int a=f?num(l[aa]):aa;
	pair<int,int> p(-1,0);
	int count,digit;
	forn(i,10){
		if((a&dig[i])!=a){
			continue;
		}
		digit=dig[i]^a;
		count=0;
		while(digit){ 
	        count += digit & 1; 
	        digit >>= 1; 
	    }
	    if(count<=k && p.first<i){
	    	cerr<<"opt "<<i<<" "<<count<<"\n";
	    	p=make_pair(i,count);
	    }
	}
	return p;
}

pair<int,int> subopt(int a,int k){
	// int a=num(l[aa]);
	pair<int,int> p(-1,0);
	int count,digit;
	forn(i,10){
		if((a&dig[i]) !=a)
			continue;
		digit=dig[i]^a;
		count=0;
		while (digit) { 
	        count += digit & 1; 
	        digit >>= 1; 
	    }
	    if(count==k && p.first<i)
	    	p=make_pair(i,count);
	}
	return p;
}

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 

	bool flag=true;
	int n,k,i=0,pkbest;
	pair<int,int> p,pbest,pk;
	string s;

	cin>>n>>k;
	vector<int> a(n),b(n),c(n,0);
	forn(i,n){
		cin>>s;
		a[i]=num(s);
	}
	forn(i,10)
		dig[i]=num(l[i]);

	forn(i,n){
		p=sat(a[i]);
		b[i]=p.first;
		k-=p.second;
	}
	cerr<<"SAT:"<<k<<" as ";
	forn(i,n)
		cerr<<b[i]<<" ";
	cerr<<"\n";

	if(k<0)
		flag=false;

	while(k>5 && i<n){
		p=opt(b[i],k,true);
		cerr<<"opt "<<p.first<<" "<<p.second<<"\n";
		b[i]=p.first;
		c[i]=p.second;
		k-=p.second;
		i++;
	}

	while(i<n && k>0){
		pbest=make_pair(b[i],0);
		pkbest=0;
		pk=sat(a[i]);
		forn(j,k+1){
			p=opt(a[i],j+pk.second,false);
			if(p.first>pbest.first){
				pbest=p;
				pkbest=pk.second;
			}
		}
		b[i]=pbest.first;
		c[i]=pbest.second-pkbest;
		k-=pbest.second-pkbest;
		i++;
	}

	if(k>1 && flag)
		cerr<<"\n\n  O SHIT	\n\n\n";
	cerr<<"k"<<k<<"\n";

	while(k>0 && i>0){
		i--;
		pk=sat(a[i]);
		pkbest=0;
		k+=c[i];
		p=subopt(a[i],k+pk.second);
		if(p.first==-1)
			continue;
		b[i]=p.first;
		k-=p.second-pk.second;
	}

	cerr<<"now k"<<k<<"\n";

	if(k>0)
		flag=false;

	cerr<<"finally k"<<k<<"\n";
	if(flag){
		forn(i,n)
			cout<<b[i];
		cout<<"\n";
		cerr<<"kya yer\n";
	}
	else{
		cerr<<"aaayeee\n";
		cout<<"-1\n";
	}
	cerr<<"hahaha\n";
	return 0;
}
