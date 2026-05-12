#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;

int main() {
    cin >> str;

    stack<char> s;

    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='(')
            s.push('(');
        else if(str[i]==')')
        {
            if(s.empty())
            {
                cout << "No" << endl;
                return 0;
            }
            else
                s.pop();
        }
        else
        {
            cout << "No" << endl;
            return 0;
        }
    }
    if(s.empty())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    // Please write your code here.

    return 0;
}
