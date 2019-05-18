#include<iostream>
#include<string>
using namespace std;
int main(){
  int test=0;
  cin>>test;
  for(int i=0;i<=test;i++){
    string str;
    cin>>str;
    int len=str.length();
    for(int j=0;j<len;j++){
      if(j%2==0){
        cout<<str[j];
      }
    }
    cout<<" ";
    for(int j=0;j<len;j++){
      if(j%2!=0){
        cout<<str[j];
      }
    }
    cout<<endl;
  }
  return 0;
}