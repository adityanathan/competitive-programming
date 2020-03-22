#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  int d[n],maxi=1,curr_min;
      
  for(int i=0;i<n;i++){
    cin>>d[i];
  }
  sort(d,d+n);
  
  int i=0,j=0,curr=0;
  
  while(i<n){
    curr_min=d[j];
    curr=1;
    while(d[i]<=curr_min+5){
      if(i>=n)
      break;
      if(i>j)
      curr++;
      i++;
    }
    j++;
    if (curr>maxi) maxi=curr;
  }
  cout<<" \n \n hi\n \n";

  for(int i=0;i<n;i++){
    cout<<d[i]<<" ";
  }
  cout<<"\n"<<maxi;
}