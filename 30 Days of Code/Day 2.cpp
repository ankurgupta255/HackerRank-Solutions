#include<iostream>
using namespace std;
int main()
{
    float a=0;
    float b=0;
    float c=0;
    float tip=0;
    float tax=0;
    float total=0;
    cin>>a;
    cin>>b;
    cin>>c;
    tip=(a*b)/100;
    tax=(a*c)/100;
    total=a+tip+tax;
    if((total-int(total))>=0.5)
    {
        total+=1;
    }
    cout<<"The total meal cost is "<<int(total)<<" dollars.";
}


