#include<iostream>
using namespace std;
int main(){
  int n=0;
  int p=0;
  int front=0;
  int back=0;
  int turns=0;
  cin>>n;
  cin>>p;
  int i=0;
  if(p<=n/2){
    if(p==1){
      turns=0;
    }
    else if(p%2==0 || p%2!=0){
      turns=p/2;
    }
  }
  else if(p>=n/2 && n%2==0){
    if(p==n){
      turns=0;
    }
    else if(p%2==0){
      turns=(n-p)/2;
    }
    else if(p%2!=0){
      turns=((n-p)/2) +1;
    }
  }
    else if(p>=n/2 && n%2!=0){
    if(p==n || p==(n-1)){
      turns=0;
    }
    else if(p%2==0 || p%2!=0){
      turns=(n-p)/2;
    }

    }
  cout<<turns;
  }


