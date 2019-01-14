#include<iostream>
using namespace std;
int main()
{
int i=0;
int n=0;
int ar[20];
long long int sum=0;
cin>>n;
if(n<=10 && n>=1)
{
for(i=0;i<n;i++)
{
cin>>ar[i];
}
for(i=0;i<n;i++)
{
sum+=ar[i];
}
cout<<sum;
}
}


