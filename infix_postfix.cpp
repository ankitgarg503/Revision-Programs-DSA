#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int precedence(char ch)
{
    if (ch == '^')
    {
        return 3;
    }
    else if (ch == '*' or ch == '/')
    {
        return 2;
    }
    else if (ch == '+' or ch == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main()
{
     string p = "a*b+(c-d)*e";
    // string p = "a+b-c";
    string ans;
    stack<char> st;
    for (int i = 0; i < p.size(); i++)
    {
        char temp = p[i];
        if ((temp >= 'a' && temp <= 'z') or (temp >= 'A' and temp <= 'Z') or (temp >= '0' and temp <= '9'))
        {
            ans = ans + temp;
        }
        else if (temp == '(')
        {
            st.push(temp);
        }
        else if (temp == ')')
        {
            while (!st.empty() and st.top() != '(')
            {
                ans = ans + st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while (!st.empty() and (precedence(temp) <= precedence(st.top())))
            {

                ans = ans + st.top();
                st.pop();
            }
            st.push(temp);
        }
    }
    while (!st.empty())
    {
        ans = ans + st.top();
        st.pop();
    }

    cout << ans << endl;

    return 0;
}