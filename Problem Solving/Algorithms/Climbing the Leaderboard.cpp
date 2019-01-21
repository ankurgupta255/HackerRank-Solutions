#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;
int main(){
  int n=0;
  cin>>n;
  int s[200000];
  for(int i=0;i<n;i++){
    cin>>s[i];
  }
  int m=0;
  cin>>m;
  int a[200000];
  for(int i=0;i<m;i++){
    cin>>a[i];
  }
  int x[200000];
  int l=1;
  int max=s[0];
  for(int i=0;i<n;i++){
      if(s[i]==max){
          x[i]=l;
      }
      else if(s[i]<max){
          l++;
          x[i]=l;
          max=s[i];
      }
  }
  int flag=0;
  int w=n-1;
  for(int i=0;i<m;i++){
      flag=0;
      for(int j=w;j>=0;j--){
          if(a[i]==s[j]){
              cout<<x[j]<<endl;
              flag=1;
              w=j;
              break;
          }
          else if(a[i]<s[j]){
              cout<<x[j]+1<<endl;
              flag=1;
              w=j;
              break;
          }
      }
      if(flag==0){
              cout<<"1"<<endl;
          }
  }
}


