#include<iostream>
#include<vector>
using namespace std;
int main(){
  long i=0;
  long j=0;
  long long k=0;
  cin>>i>>j>>k;
  vector<long>a;
  
  long cnt=0;
  for(long q=i;q<=j;q++){
    a.push_back(q);
  }
  long l=a.size();
  int b[5000000];
  for(long q=0;q<l;q++){
    while(a[q]!=0){
      long rem=a[q]%10;
      b[q]=(b[q]*10)+rem;
      a[q]/=10;
    }
  }
  l=0;
  for (long q = i; q <= j; q++) {
    a[l] = q;
    l++;
  }
  long double num=0;
  for(long q=0;q<l;q++){
    if(a[q]>b[q]){
      long double num1=(a[q]-b[q]);
      num=num1/k;
    }
    else{
      long double num1 = (b[q] - a[q]);
      num = num1 / k;
    }
    if(long(num)==num){
      cnt++;
    }
  }
  cout<<cnt;
}


