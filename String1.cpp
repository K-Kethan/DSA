#include<bits/stdc++.h>

int main()
{
  string s;
  cin>>s;
  string t;
  getline(cin,t);
  cout<<s.length();
  t=s+"ccc";
  cout<<t;
  cout<<s.substr(2,3);
  s.erase(s.begin()+2);
  return 0;
 }
