#include<iostream>
using namespace std;
int main(){
  int n=0;
  int flag=0;
  cin>>n;
  int cnt=0;
  int num=0;
  char str[1000000];
  for(int i=0;i<n;i++){
      cin>>str[i];
  }
  for(int i=0;i<n;i++){
    if(str[i]=='U'){
      num++;
    }
    else if(str[i]=='D'){
      num--;
    }
    if(num<0){
      flag=1;
    }
    if(flag==1){
        if(num==0){
            cnt++;
            flag=0;
        }
    }
  }
  cout<<cnt;
}


