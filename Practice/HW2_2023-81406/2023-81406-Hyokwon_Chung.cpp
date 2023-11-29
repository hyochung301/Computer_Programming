//Assignment#2 Hyokwon Chung (2023-81406) 2023-10-24 Professor Uhm
#include <iostream>
#include <string>
#include <stack>

using namespace std;

// different priority for different operators (PAMDAS)
// higher priority operator will be at the top of the stack
int priority (char alpha){
    if(alpha == '+' || alpha =='-')
        return 1;
 
    if(alpha == '*' || alpha =='/')
        return 2;
 
    return 0;
}


// function to convert infix to postfix
// this function handles alnum, brackets, and operators
// 
string convert(string input){
    string postfix;
    stack <int>s;

    for (int i = 0; i < input.length(); i++) {
    char c = input[i];
        // if operand add to the postfix expression
        if(isalnum(c))      
        {
            postfix += c;
        }
        // if opening bracket then push the stack
        else if(c=='(')
        {
            s.push(c);
        }
        // if closing bracket encounted then keep popping from stack until 
        // closing a pair opening bracket is not encountered
        else if(c==')')
        {
            while(s.top()!='('){
                postfix += s.top();
                s.pop();
            }
            s.pop();
        }
        // if operator then keep popping from stack 
        else            
        {
            while (!s.empty() && priority(c) <= priority(s.top())){
                // if priority of operator is less than or equal to the top of the stack
                // then pop the stack and add to the postfix expression
                postfix += s.top();
                s.pop();
            }
            // push the operator to the stack
            s.push(c);
        }
    }

    // pop all the remaining elements from the stack
    while(!s.empty()){
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main() {
    while (true) {
        string infixExpression;
        cout << "Enter an infix expression (or 'exit' to end): ";
        cin >> infixExpression;
        
        // exit if user types 'exit'
        if (infixExpression == "exit")
            break;
        
        // convert infix to postfix
        string postfixExpression = convert(infixExpression);
        // print postfix expression
        cout << "Postfix expression: " << postfixExpression << endl;
    }

    return 0;
}