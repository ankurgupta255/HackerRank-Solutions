#include<iostream>
using namespace std;
int main(){
  int q=0;
  cin>>q;
  int x[100];
  int y[100];
  int z[100];
  int diff1=0;
  int diff2=0;
  for(int i=0;i<q;i++){
    cin>>x[i]>>y[i]>>z[i];
    if(z[i]>x[i]){
      diff1=z[i]-x[i];
    }
    else{
      diff1=x[i]-z[i];
    }
    if(z[i]>y[i]){
      diff2=z[i]-y[i];
    }
    else{
      diff2=y[i]-z[i];
    }
    if(diff1==diff2){
      cout<<"Mouse C";
    }
    else if(diff1>diff2){
      cout<<"Cat B";
    }
    else{
      cout<<"Cat A";
    }
    cout<<endl;
  }
}


