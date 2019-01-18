#include <iostream>
using namespace std;
int main() {
  long bu = 0;
  int k = 0;
  int d = 0;
  long a[1000];
  long b[1000];
  int l = 0;
  int flag = 0;
  cin >> bu >> k >> d;
  for (int i = 0; i < k; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < d; i++) {
    cin >> b[i];
  }
  long long sum[2000000];
  long long diff[2000000];
  for (int i = 0; i < k; i++) {
    for (int j = 0; j < d; j++) {
      sum[l] = a[i] + b[j];
      diff[l] = bu - sum[l];
      l++;
    }
  }
  long long min = 0;
  for(int i=0;i<l;i++){
    if(diff[i]>=0){
      min=diff[i];
      flag=1;
      break;
    }
  }
  if(flag==1){
  for (int i = 0; i < l; i++) {
    if ((diff[i] < min) && (diff[i] >= 0)) {
      min = diff[i];
      flag = 1;
    }
  }
  }
  long long fin = bu - min;
  if (flag == 1) {
    cout << fin;
  } else {
    cout << "-1";
  }
}

