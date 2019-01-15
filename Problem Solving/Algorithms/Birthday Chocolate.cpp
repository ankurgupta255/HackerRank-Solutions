#include<iostream>
using namespace std;
int main(){
  int n=0;
  int a[100];
  int d=0;
  int m=0;
  int i=0;
  int j=0;
  int sum=0;
  int cnt=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  cin>>d;
  cin>>m;
  for(i=0;i<n;i++){
    sum=0;
    for(j=0;j<m;j++){
      sum+=a[j+i];
      }
    if(sum==d){
      cnt++;
    }
    }
  cout<<cnt;
  }


