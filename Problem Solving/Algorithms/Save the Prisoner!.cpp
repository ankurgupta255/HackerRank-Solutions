#include <iostream>
using namespace std;
int main() {
  int t = 0;
  long a[100];
  cin >> t;
  for (int i = 0; i < t; i++) {
    long n = 0;
    long m = 0;
    long s = 0;
    cin >> n >> m >> s;
    long cnt = 0;
    long x = 0;
    if (n >= m) {
      cnt = s + m - 1;
      if(m+s-1>n){
        cnt=m+s-1-n;
      }
    } 
    else if (m > n) {
      x = m % n;
      if(x+s-1>n){
        cnt=x+s-1-n;
      }
      else{
        cnt=x+s-1;
      }
      if(cnt==0){
        cnt=n;
      }
    }
    a[i]=cnt;
  }
  for(int i=0;i<t;i++){
    cout<<a[i]<<endl;
  }
}


