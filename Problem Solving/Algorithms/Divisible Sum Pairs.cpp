#include<iostream>
using namespace std;
int main(){
  int n=0;
  int k=0;
  int i=0;
  int j=0;
  int num=0;
  int a[100];
  int cnt=0;
  cin>>n;
  cin>>k;
  for(i=0;i<n;i++){
    cin>>a[i];
  }
  for(i=0;i<n;i++){
    num=0;
    for(j=0;j<n;j++){
      if(i<j){
        num=a[i]+a[j];
        if(num%k==0){
          cnt++;
        }
      }
    }
  }
  cout<<cnt;
}


