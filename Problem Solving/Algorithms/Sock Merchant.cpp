#include<iostream>
using namespace std;

int main(){
  int n=0;
  cin>>n;
  int cnt=0;
  int a[100];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if((a[i]==a[j])&&(a[i]!=0)){
        cnt++;
        a[i]=0;
        a[j]=0;
      }
    }
  }
  cout<<cnt;
}


