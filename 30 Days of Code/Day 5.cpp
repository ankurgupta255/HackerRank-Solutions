#include<iostream>
using namespace std;
int main()
{
    int n=0;
    int i=0;
    cin>>n;
    if(n>=2 && n<=20)
    {
        for(i=1;i<=10;i++)
        {
            cout<<n<<" x "<<i<<" = "<<(n*i)<<endl;
        }
    }
}