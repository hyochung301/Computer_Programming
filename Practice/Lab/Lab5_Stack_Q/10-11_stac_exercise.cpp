#include<iostream>
#include <stack>

using namespace std;

bool isBalanced(string expr){
    stack<char> s;
    char ch;
    for (int i =0; i<expr.length(); i++){
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{'){
            s.push(expr[i]);
            continue;
        }
        if (expr[i]==')'){
            if (s.empty()){
                return false;
            }
            ch = s.top();
            s.pop();
            if (ch != '('){
                return false;
            }
        }
        if (expr[i]==']'){
            if (s.empty()){
                return false;
            }
            ch = s.top();
            s.pop();
            if (ch != '['){
                return false;
            }
        }
        if (expr[i]=='}'){
            if (s.empty()){
                return false;
            }
            ch = s.top();
            s.pop();
            if (ch != '{'){
                return false;
            }
        }
    }
    return (s.empty());
}

int main() {
    while(true){
        string expr;
        cout << "Enter an expression: " << endl;
        cin >> expr;

        if (isBalanced(expr)){
            cout << "Balanced" << endl;
        } else {
            cout << "Not balanced" << endl;
        }
        return 0;
    }

}