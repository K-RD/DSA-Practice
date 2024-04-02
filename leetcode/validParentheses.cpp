#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stack;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                stack.push(s[i]);
            }
            else if (!stack.empty())
            {
                if (stack.top() == '(' && s[i] == ')')
                {
                    stack.pop();
                }
                else if (stack.top() == '{' && s[i] == '}')
                {
                    stack.pop();
                }
                else if (stack.top() == '[' && s[i] == ']')
                {
                    stack.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        return stack.empty();
    }
};

int main()
{
    string s1 = "()";
    string s2 = "(){}[]";
    string s3 = "(}";
    string s4 = "(({([{}])}))";
    Solution s;
    cout << "Printing given parentheses is valid or not :" << endl;
    cout << s1 << " : " << s.isValid(s1) << endl;
    cout << s2 << " : " << s.isValid(s2) << endl;
    cout << s3 << " : " << s.isValid(s3) << endl;
    cout << s4 << " : " << s.isValid(s4) << endl;
    return 0;
}