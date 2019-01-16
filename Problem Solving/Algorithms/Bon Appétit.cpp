#include<iostream>
using namespace std;
int main(){
  int n=0;
  int k=0;
  int bill[100000];
  int anna=0;
  int i=0;
  int sum=0;
  cin>>n;
  cin>>k;
  for(i=0;i<n;i++){
    cin>>bill[i];
  }
  cin>>anna;
  for(i=0;i<n;i++){
    sum+=bill[i];
  }
  sum/=2;
  sum=sum-(bill[k]/2);
  if(anna==sum){
    cout<<"Bon Appetit";
  }
  else{
    cout<<anna-sum;
  }
}


