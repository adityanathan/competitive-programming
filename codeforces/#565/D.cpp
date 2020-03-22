#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    // This is checked so that we can skip  
    // middle five numbers in below loop 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
} 

bool maxPrime(int n) 
{ 
    int i=2;
    while(n%i!=0){
        i++;
    }
    return n/i;
} 

int nth(int n){
    int c=0;
    for(int i=2;i<200000;i++){
        
        if(isPrime(i))
        c++;

        if(c==n)
         {
          return i;
         }
     }
}



int main()
{   int n,num,f,tot=0;
    cin >>n;
    map<int,int> comp,prim,final;
    for(int i=0;i<2*n;i++){
        cin>>num;
        if(isPrime(num)){
            if(prim.find(num)==prim.end())
                prim[num]=1;
            else prim[num]++;
            }
        else{
            if(comp.find(num)==comp.end())
                comp[num]=1;
            else comp[num]++;
        }
    }

    map<int, int>::iterator itr; 
    for (itr = comp.begin(); itr != comp.end(); ++itr) {

        f=maxPrime(itr->first);

        if(final.find(itr->first)==final.end())
            final[itr->first]=itr->second;
        else final[itr->first]+=itr->second;

        tot+=itr->second;
        prim[f]-=itr->second;

    }
    for (itr = prim.begin(); itr != prim.end() && tot<n; ++itr) {
        f=(itr->first);

        if(final.find(f)==final.end())
            final[f]=itr->second;
        else final[f]+=itr->second;

        prim[nth(f)]-=itr->second;
        tot+=itr->second;

    }

    int t=n;
    for (itr = final.begin(); itr != final.end(); ++itr) {
        int i=itr->second;
        while(i-- && t--){
            cout<<itr->first<<" ";
        } if(t==0) break;
    }

    return 0;
    
}