#include<iostream>
using namespace std;

void printSubsets(string ip,string op){
    if(ip.length()==0){
        cout<<op<<" ";
        return;
    }
    string op1=op;
    string op2=op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    printSubsets(ip,op1);
    printSubsets(ip,op2);
}

int main(){
 string ip;
 cin>>ip;
 string op="";
 printSubsets(ip,op);
 return 0;
}