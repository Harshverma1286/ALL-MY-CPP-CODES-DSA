#include <iostream>
#include <stack>
using namespace std;

// Operator precedence function
int prio(char ch) {
    if (ch == '+' || ch == '-') return 1;
    else if (ch == '*' || ch == '/') return 2;
    else return 0; // For '('
}

// Solving the operation between two values based on the operator
string solve(string val1, string val2, char ch) {
    string s ="";
    s+=val1;
    s+=val2;
     s.push_back(ch);
    return s;
    
}

int main() {
    string s = "(7+9)*4/8-3";
    stack<string> val;   // Stack to store values (numbers)
    stack<char> op;   // Stack to store operators (characters)

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            // If it's a number, push it to the values stack
            val.push(to_string(s[i] - '0')); // Convert char to int
        }
        else if (s[i] == '(') {
            // Push '(' to operator stack
            op.push(s[i]);
        }
        else if (s[i] == ')') {
            // If we encounter a ')', we solve everything until '('
            while (!op.empty() && op.top() != '(') {
                char ch = op.top();
                op.pop();
                string val2 = val.top();
                val.pop();
                string val1 = val.top();
                val.pop();
                string ans = solve(val1, val2, ch);
                val.push(ans);
            }
            op.pop(); // Pop the '('
        }
        else {
            // Operator encountered
            while (!op.empty() && prio(s[i]) <= prio(op.top())) {
                char ch = op.top();
                op.pop();
                string val2 = val.top();
                val.pop();
                string val1 = val.top();
                val.pop();
                string ans = solve(val1, val2, ch);
                val.push(ans);
            }
            op.push(s[i]);
        }
    }

    // Process remaining operators in the stack
    while (!op.empty()) {
        char ch = op.top();
        op.pop();
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        string ans = solve(val1, val2, ch);
        val.push(ans);
    }

    cout << "Result: " << val.top() << endl; // Output the final result
    return 0;
}