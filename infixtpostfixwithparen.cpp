#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool prcd(char x, char y) {
  if(x=='('||y=='(')
  {
    return false;
  }
  else{
    if(y==')')
      return true;
    else{
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
  }
}
int main() {
    string infix;
    string postfix;
    stack<char> s;
    cin >> infix;
    int i = 0;
    while (i < infix.size()) {
        char symb = infix[i];
        i++;
        if (symb >= 'a' && symb <= 'z') {
            postfix += symb;
        } else {
            while (!s.empty() && prcd(s.top(),symb)) {
                char x = s.top();
                s.pop();
                postfix += x;
            }
            if(symb==')')
            {    s.top();
                 s.pop();
            }
            
            else
            {
            s.push(symb);
            }
        }
    }
    while (!s.empty()) {
        char x = s.top();
        s.pop();
        postfix += x;
    }
    cout<<postfix;
    }
    