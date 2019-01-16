#include<iostream>
using namespace std;
int main(){
    int a=0;
    int c=0;
    int b[100000];
    int i=0;
    int j=0;
    int temp=0;
    int end=0;
    cin>>a;
    cin>>c;
    for(i=0;i<a;i++){
        cin>>b[i];
    }
    for(i=0;i<c;i++){
        for(j=0;j<a-1;j++){
            temp=b[j];
            b[j]=b[j+1];
            b[j+1]=temp;
    }}
    for(i=0;i<a;i++){
        cout<<b[i]<<" ";
    }
}


