#include<bits/stdc++.h>
using namespace std;
#define LL long long int
bool check(LL x,LL y){
  if(x+y==0)
    return true;
  return ((x%2==0 && y%2!=0) || (x%2!=0 && y%2==0));
}
int main(){
    LL test;
    cin>>test;
    for(LL t=0;t<test;t++){
        LL x,y;cin>>x>>y;
        bool dirX = (x>=0),dirY =(y>=0);
        x = abs(x);
        y = abs(y);
        bool possible = true;
        string result="";
        if((x%2==0 && y%2!=0) || (x%2!=0 && y%2==0)){
            // both fill -> easy
            while((x!=0 || y!=0) && possible){
              if(x+y == 1){
                if(x==0){if(!dirY){
                    result += "S";
                }
                else{
                    result += "N";
                }}
                else{
                  if(!dirX){
                      result += "W";
                  }
                  else{
                      result += "E";
                  }
                }
                x=0;y=0;
                break;
              }
                if(x%2==0 || x==0){
                    //work on y
                    if(check(x/2,(y+1)/2)){
                        if(dirY){
                            result += "S";
                        }
                        else{
                            result += "N";
                        }
                        x = x/2;
                        y = (y+1)/2;
                    }
                    else if(check(x/2,(y-1)/2)){
                        if(!dirY){
                            result += "S";
                        }
                        else{
                            result += "N";
                        }
                        x = x/2;
                        y = (y-1)/2;
                    }
                }
                else if(y%2==0 || y ==0){
                     //work on x
                    if(check(y/2,(x+1)/2)){
                        if(dirX){
                            result += "W";
                        }
                        else{
                            result += "E";
                        }
                        y = y/2;
                        x = (x+1)/2;
                    }
                    else if(check(y/2,(x-1)/2)){
                        if(!dirX){
                            result += "W";
                        }
                        else{
                            result += "E";
                        }
                        y = y/2;
                        x = (x-1)/2;
                    }
                }
                else
                    possible=false;
                // cout << x << " "<<y << endl;
            }
        }
        else
            possible = false;
        if(!possible)
            result = "IMPOSSIBLE";

        cout << "Case #"<<t+1<<": " << result << endl;
    }
}