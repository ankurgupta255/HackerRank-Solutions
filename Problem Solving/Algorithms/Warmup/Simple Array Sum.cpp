#include<iostream>
using namespace std;
int main()
{
int i=0;
int n=0;
int sum=0;
int ar[1000];
cin>>n;
for(i=0;i<n;i++)
{
cin>>ar[i];
}
for(i=0;i<n;i++)
{
sum=sum+ar[i];
}
cout<<sum;
}


