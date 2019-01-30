#include<iostream>
using namespace std;
int main(){
  int n=0;
  int p[100];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>p[i];
  }
  for(int x=1;x<=n;x++){
  for (int i = 0; i < n; i++) {
    if (p[i] == x) {
      for (int j = 0; j < n; j++) {
        if (p[j] == i + 1) {
          cout << j + 1<<endl;
        }
      }
    }
  }
}
}


