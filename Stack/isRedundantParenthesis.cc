#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;


bool isOperator(char c) {
    switch (c) {
    case '+':
    case '-':
    case '/':
    case '*': return true;
    }
    return false;
}
bool isBracket(char c) {
    return c == '(' or c == ')';
}


int redundantParantheses(const string& str) {
    stack<char> s;
    int cnt = 0;
    for (int i = 0; i < str.size(); ++i) {
        char cur = str[i];
        if (isOperator(cur) == false and isBracket(cur) == false) continue;

        if (isOperator(cur) && s.empty() == false) {
            s.push(cur);
        }
        if (cur == '(') s.push(cur);
        if (cur == ')') {
            bool isRedundant = true;
            while (s.empty() == false && s.top() != '(') {
                isRedundant = false;
                s.pop();
            }
            s.pop();
            if (isRedundant) ++cnt;
        }
    }
    return cnt;
}

int main() {
    string s;
    cin >> s;
    int ans = redundantParantheses(s);
    if(ans)
        cout<<"True\n";
    else
        cout<<"False\n";
    return 0;
}