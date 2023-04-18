#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>
#include "Header.h"
using namespace std;
int main() {
    string input;
    cout << "Enter a string with parentheses: ";
    cin >> input;

    if (isBalanced(input)) {
        string postfix = infixToPostfix(input);
        cout << "The parentheses are balanced." << endl;
        cout << "Postfix expression: " << postfix << endl;
    }
    else {
        cout << "The parentheses are not balanced." << endl;
    }

    return 0;
}
