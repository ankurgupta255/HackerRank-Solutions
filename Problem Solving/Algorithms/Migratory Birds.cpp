#include<iostream>
using namespace std;
int main(){
  int n=0;
  int a[200000];
  int b[5];
  int i=0;
  int x=0;
  cin>>n;
  for(i=0;i<n;i++){
    cin>>a[i];
  }
  for(i=0;i<5;i++){
    b[i]=0;
  }
  for(i=0;i<n;i++){
    if(a[i]==1){
      b[0]+=1;
    }
    else if(a[i]==2){
      b[1]+=1;
    }
    else if(a[i]==3){
      b[2]+=1;
    }
    else if(a[i]==4){
      b[3]+=1;
    }
    else if(a[i]==5){
      b[4]+=1;
    }
  }
  int max=b[0];
  for(i=0;i<5;i++){
    if(b[i]>max){
      max=b[i];
      x=i;
    }
    else if(b[i]==max){
      if(i<x){
        max=b[i];
        x=i;
      }
  }
}
cout<<x+1;
}


