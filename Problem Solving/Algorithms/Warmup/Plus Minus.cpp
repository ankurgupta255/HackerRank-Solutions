#include<iostream>
using namespace std;
int main()
{
int i;
int n=0;
int arr[100];
float s1=0;
float s2=0;
float s3=0;
cin>>n;
if(n>0 && n<101)
{
for(i=0;i<n;i++)
{
cin>>arr[i];
}
for(i=0;i<n;i++)
{
if(arr[i]>0)
s1++;
else if(arr[i]<0)
s2++;
else
s3++;
}
cout<<(s1/n)<<endl;
cout<<(s2/n)<<endl;
cout<<(s3/n)<<endl;
}
}


