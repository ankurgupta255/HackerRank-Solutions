#include<iostream>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  int c[100];
  for(int i=0;i<n;i++){
    cin>>c[i];
  }
  int e=100;
  for(int i=0;i<n;i+=k){
    if(c[i]==0){
      e--;
    }
    else if(c[i]==1){
      e-=3;
    }
  }
  cout<<e;
}


