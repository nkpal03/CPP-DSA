#include <bits/stdc++.h>
using namespace std;

// function to check whether the input string is balanced or not
void balancedORnot(string str)
{
    stack<char> s; // stack<data_type> from STL
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
            s.push(str[i]);
        else if (str[i] == ')' && s.top() == '(')
            s.pop();
        else if (str[i] == '}' && s.top() == '{')
            s.pop();
        else if (str[i] == ']' && s.top() == '[')
            s.pop();
        else
            continue;
    }
    if (!s.empty())
        cout << "Not Balanced" << endl;
    else
        cout << "Balanced" << endl;
}

int main()
{
    cout << "Enter number of strings \n>>";
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cout << "String\n>>";
        cin >> str;
        balancedORnot(str);
    }
}