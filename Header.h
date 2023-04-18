#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>
using namespace std;
bool isBalanced(const string& s);
bool isOperator(char c);
int precedence(char c);
string infixToPostfix(const string& infix);