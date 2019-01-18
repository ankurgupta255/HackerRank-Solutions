#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int n=0;
  cin>>n;
  int max=0;
  int a[100];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int cnt=0;
  sort(a,a+n);
  for(int i=0;i<n-1;i++){
      cnt=0;
    for(int j=i+1;j<n;j++){
      if(a[j]-a[i]<2){
        cnt++;
        }
     }
     if(cnt>max){
         max=cnt;
     }
   }
cout<<max+1;
}
