#include<iostream>
using namespace std;
int main(){
  int a[100];
  string b;
  int l = 0;
  for(int i=0;i<26;i++){
    cin>>a[i];
  }
  getline(cin,b);
  l=b.length();
  int c[100];
  for(int i=0;i<l;i++){
    c[i]=int(b[i])-97;
  }
  int d[100];
  for(int i=0;i<l;i++){
    d[i]=a[c[i]];
  }
  int max=d[0];
  for(int i=0;i<l;i++){
    if(d[i]>max){
      max=d[i];
    }
  }
  int fin=max*l;
  cout<<fin;
  return 0;
}


