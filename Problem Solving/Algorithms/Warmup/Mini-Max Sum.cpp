#include<iostream>
using namespace std;
int main()
 {
 int i=0,arr[5],temp=0,j=0;
    long long int sum=0;
 for(i=0;i<5;i++)
 {
 cin>>arr[i];
 }
 for(i=0;i<4;i++){
 for(j=0;j<4-i;j++){
 if(arr[j]>arr[j+1]){
 temp=arr[j];
 arr[j]=arr[j+1];
 arr[j+1]=temp;
 }
 }
 }
  sum=0;
for(i=0;i<4;i++){
  sum+=arr[i];
}
  cout<<sum;
  sum=0;
for(i=1;i<5;i++){
     sum+=arr[i];   
    }
  cout<<" "<<sum;
}


