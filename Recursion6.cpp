#include<iostream>
using namespace std;

//balanced paranthesis

void solve(int open,int close,string op,vector<string> &v)
{
 if(open==0 && close==0)
  {
   v.push_back(op);
   return;
  }
 if(open!=0)
 {
  string op1=op;
  op1.push_back('(');
  solve(open-1,close,op1,v);
 }
 
 if(close>open)
 {
  string op2=op;
  op2.push_back(')');
  solve(open,close-1,op2,v);
 }
 return; 
}

int main()
{
  int n;
  cin>>n;
  string op="";
  int open=n,close=n;
  vector<string> v;
  solve(open,close,op,v);
  for(auto x:v)
    cout<<x<<endl;
    
  return 0;
 }
