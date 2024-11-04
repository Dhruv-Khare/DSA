#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool prcd(char x, char y) {
    if (x == '^') {
        return false;
    }
    if (x == '*' || x == '/' || x == '%') {
        return !(y == '^');
    }
    if (x == '+' || x == '-') {
        return !(y == '+' || y == '-');
    }
    return false;
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
            while (!s.empty() && prcd(symb, s.top())) {
                char x = s.top();
                s.pop();
                postfix += x;
            }
            s.push(symb);
        }
    }
    while (!s.empty()) {
        char x = s.top();
        s.pop();
        postfix += x;
    }
    cout<<postfix;
    }