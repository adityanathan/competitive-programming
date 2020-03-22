#include <bits/stdc++.h>
using namespace std;

int main() {
  string s,t,r="";
  cin>>s;cin>>t;
  int count1=0,count0=0,tcount1=0,tcount0=0;
  
  for(int i=0;s[i];i++){
    if(s[i]=='1')
      count1++;
    else count0++;
  }
  for(int i=0;t[i];i++){
    if(t[i]=='1')
      tcount1++;
    else tcount0++;
  }
  if(count0!=0 && tcount0!= 0)
  {if(1.0*count1/count0>1.0*tcount1/tcount0)
    {
      for(int i=0;i<count0/tcount0;i++)
      {
        r+=t;
      }
      int i=count0%tcount0;
      while(i--){
        r+='0';
      }
      while(r.length()<s.length()){
        r+='1';
      }
    }
    else
    {
      for(int i=0;i<count1/tcount1;i++)
      {
        r+=t;
      }
      int i=count1%tcount1;
      while(i--){
        r+='1';
      }
      while(r.length()<s.length()){
        r+='0';
      }
    }
  }
  else if(count0!=0 && tcount0==0)
    {

      for(int i=0;i<count1/tcount1;i++)
      {
        r+=t;
      }
      int i=count1%tcount1;
      while(i--){
        r+='1';
      }
      while(r.length()<s.length()){
        r+='0';
      }
    }
    else r=s;
  cout<<r;
  return 0;
}