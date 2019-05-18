#include<iostream>
using namespace std;
void factorial(int n)
{
    int f=1;
    int i=0;
    if(n<=1)
    {
        f=1;
    }
    else 
    {
        for(i=1;i<=n;i++)
            f*=i;
    }
    cout<<f;
    }
int main()
{
    int n=0;
    cin>>n;
    factorial(n);
}