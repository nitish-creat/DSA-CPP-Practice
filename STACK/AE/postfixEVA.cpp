#include <iostream>
#include <stack>
#include <string>
#include <cctype>
#include <cmath>
using namespace std;

/* Function to return precedence of operators */
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}


/* Infix to Postfix conversion */
string infixToPostfix(string infix) {
    stack<char> st;
    string postfix = "";

    for (int i = 0; i < infix.length(); i++) {
        char ch = infix[i];

        // Operand (digit)
        if (isdigit(ch)) {
            while (i < infix.length() && isdigit(infix[i])) {
                postfix += infix[i];
                i++;
            }
            postfix += ' ';
            i--;
        }
        // Opening bracket
        else if (ch == '(') {
            st.push(ch);
        }
        // Closing bracket
        else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                postfix += ' ';
                st.pop();
            }
            st.pop(); // remove '('
        }
        // Operator
        else {
            while (!st.empty() && precedence(st.top()) >= precedence(ch)) {
                postfix += st.top();
                postfix += ' ';
                st.pop();
            }
            st.push(ch);
        }
    }

    while (!st.empty()) {
        postfix += st.top();
        postfix += ' ';
        st.pop();
    }

    return postfix;
}

/* Postfix Evaluation */
int evalPostfix(string postfix) {
    stack<int> st;

    for (int i = 0; i < postfix.length(); i++) {
        if (isdigit(postfix[i])) {
            int num = 0;
            while (i < postfix.length() && isdigit(postfix[i])) {
                num = num * 10 + (postfix[i] - '0');
                i++;
            }
            st.push(num);
        }
        else if (postfix[i] == ' ') {
            continue;
        }
        else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();

            switch (postfix[i]) {
                case '+': st.push(a + b); break;
                case '-': st.push(a - b); break;
                case '*': st.push(a * b); break;
                case '/': st.push(a / b); break;
                case '^': st.push(pow(a, b)); break;
            }
        }
    }

    return st.top();
}

int main() {
    string infix = "2+43/20+43+20*23";

    string postfix = infixToPostfix(infix);
    cout << "Postfix: " << postfix << endl;

    int result = evalPostfix(postfix);
    cout << "Result: " << result << endl;

    return 0;
}
