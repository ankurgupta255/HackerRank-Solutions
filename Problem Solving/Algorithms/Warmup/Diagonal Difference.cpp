#include<iostream>
using namespace std;
int main()
{
int i=0;
int j=0;
int n=0;
int arr[100][100];
int sum1=0;
int sum2=0;
int diff=0;
cin>>n;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cin>>arr[i][j];
}}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i==j)
{
sum1+=arr[i][j];
}}}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if((i+j)==(n-1))
{
sum2+=arr[i][j];
}}}
diff=sum1-sum2;
if(diff<0)
{
diff*=(-1);
cout<<diff;
}
else
cout<<diff;
}


