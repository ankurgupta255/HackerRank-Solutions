#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t=0;
    cin>>t;
    int j=0;
    while(t--){
        long num;
        cin>>num;
        if(num==1){
            cout<<"Not prime\n";
            continue;
        }
        int flag=0;
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"Prime\n";
        }
        else{
            cout<<"Not prime\n";
        }
    }
    return 0;
}
