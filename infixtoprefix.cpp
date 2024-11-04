#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
bool prcd(char x,char y)
{
  if(x=='^'||x=='*'||x=='/'||x=='%')
  {
    if(y=='^')
       return false;
    else
      return true;
  }
  else{
    if(x=='+'||x=='-')
    {
      return true;
    }
    else
    return false; 
  }
}
int main()
{
  string infix;
  string prefix;
  stack<char> s;
  cin>>infix;

  reverse(infix.begin(),infix.end());
  int i=0;
  while(i<infix.size())
  {
    char symb=infix[i];
    i++;
    if(symb>='a'&&symb<='z')
    {
      prefix=prefix+symb;
    }
    else{
      while(!s.empty()&&!prcd(symb,s.top()))
      {
        char x=s.top();
        prefix=prefix+x;
      }
      s.push(symb);
    }
  }
  while(!s.empty())
  {
    char x=s.top();
    s.pop();
    prefix=prefix+x;

  }
  reverse(prefix.begin(),prefix.end());
  cout<<prefix;



}