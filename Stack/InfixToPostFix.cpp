#include <iostream>
#include <stack>
using namespace std;

int precendence(char c)
{
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/' || c == '%')
        return 2;
    return 0;
}

string postFix(string s)
{
    stack<char> st;
    string temp = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] < 'z' || s[i] >= 'A' && s[i] <= 'Z' || s[i] >= '0' && s[i] <= '9')
        {
            temp += s[i];
        }
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%')
        {
            while (!st.empty() && precendence(st.top()) >= precendence(s[i]))
            {
                temp += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        temp += st.top();
        st.pop();
    }
    return temp;
}

int main()
{
    string s = "a-b*d+c";
    s = postFix(s);
    cout << s;
}