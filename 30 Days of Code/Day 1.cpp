#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

int num=0;
double num1;
double sum;
string str;
int cnt=0;
cin>>num;
scanf("%lf",&num1);
sum=d+num1;
cin.ignore();
getline(cin, str);
cout<<num+i<<endl;
cout<<fixed<<setprecision(1)<<sum;
cout<<endl;
cout<<s;
cout<<str;

    return 0;
