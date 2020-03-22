#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  int a[n],count1=0,count2=0,maxc=0,flag1=0,flag2=0;
  count1++; count2++;
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==1) flag1=1;
    else flag2=1;
  }
  for(int i=1;i<n;i++){
    if(a[i]==1){
      while(a[i]==a[i-1]){
        count1++;
        i++;
        //cout<<"in 1: "<<" c1 "<<count1<<" and "<<"c2 "<<count2<<"\n";
      }
      maxc=max(maxc,min(count1,count2));
      count2=1;
    }
    else if(a[i]==2){
      
      while(a[i]==a[i-1]){
        count2++;
        i++;
        //cout<<"in 2: "<<" c1 "<<count1<<" and "<<"c2 "<<count2<<"\n";;
      }
      maxc=max(maxc,min(count1,count2));
      count1=1;
    }
  }
  if(flag1==0||flag2==0)
    cout<<"0";
  else
  cout<<2*maxc;
  return 0;
}