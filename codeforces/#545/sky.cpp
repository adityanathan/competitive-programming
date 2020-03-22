#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m;
  cin>>n;cin>>m;
  int a[n][m],b[n][m];
  
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>> a[i][j];
    
    b[i][j]=0;
  }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      map<int, int> gquiz1;
      for(int l=0;l<n;l++){
        gquiz1[a[l][j]]=1;
      }
      map<int, int> gquiz2;
      for(int l=0;l<n;l++){
        gquiz2[a[i][l]]=1;
      }
      b[i][j]=max(gquiz1.size(),gquiz2.size());
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
      cout<< b[i][j]<<" ";
    cout<<"\n";
  }
  return 0;
}