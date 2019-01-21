#include<iostream>
using namespace std;
int main(){
  int n=0;
  int k=0;
  cin>>n>>k;
  int a[100];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int max=0;
  max=a[0];
  for(int i=0;i<n;i++){
    if(a[i]>max){
      max=a[i];
    }
  }
  if(k<=max){
    cout<<max-k;
  }
  else{
    cout<<"0";
  }
}


