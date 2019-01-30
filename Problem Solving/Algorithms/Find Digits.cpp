#include<iostream>
using namespace std;
int main(){
  int t=0;
  cin>>t;
  for(int i=0;i<t;i++){
    long n=0;
    cin>>n;
    long cnt = 0;
    long v=n;
    while (n != 0) {
      long x = n % 10;
      if (x != 0) {
        if (v % x == 0) {
          cnt++;
        }
      }
      n /= 10;
    }
    cout<<cnt<<endl;
  }
} 


