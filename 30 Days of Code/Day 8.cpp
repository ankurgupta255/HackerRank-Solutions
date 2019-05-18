#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string,int>phonebook;
    map<string,int>::iterator p;
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        int num;
        cin>>s>>num;
        phonebook.insert(make_pair(s,num));
    }
    string s;
    cin>>s;
    while(s!=""){
        p=phonebook.find(s);
        if(p==phonebook.end()){
            cout<<"Not found"<<endl;
        }
        else{
            cout<<p->first<<"="<<p->second<<endl;
        }\
        s={};
        cin>>s;
    }
    return 0;
}