#include<iostream>
using namespace std;
int main(){
  int n=0;
  int i=0;
  int now1=0;
  int now2=0;
  int cnt1=0;
  int cnt2=0;
  int a[10000];
  cin>>n;
  for(i=0;i<n;i++){
    cin>>a[i];
  }
  now1=a[0];
  now2=a[0];
  for(i=1;i<n;i++){
    if(a[i]>now1){
      now1=a[i];
      cnt1++;
    }
  }
  for(i=1;i<n;i++){
    if(a[i]<now2){
      now2=a[i];
      cnt2++;
    }
  }
  cout<<cnt1<<" "<<cnt2;
  
}


