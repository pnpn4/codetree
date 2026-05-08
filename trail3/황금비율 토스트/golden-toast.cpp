#include <iostream>
#include <string>
#include <list>

using namespace std;

int n, m;
string s;

int main() {
    list<char> l;
    list<char>::iterator it;
    cin >> n >> m;
    cin >> s;
    /*for(int i=0;i<s.length();i++)
    {
        l.push_back(s[i])
    }*/
    /*for(char c:s)
    {
        l.push_back(c);
    }*/
    l.assign(s.begin(),s.end());
    it=l.end();
    char c;
    for (int i = 0; i < m; i++) {
        char command;
        cin >> command;
        if (command == 'P') {
            cin >> c;
        }
        if (command == 'L')
        {
            if(it!=l.begin())
                it--;
        }
        else if (command=='R')
        {
            if(it!=l.end())
                it++;
        }
        else if(command=='D')
        {
            if(it!=l.end())
                it=l.erase(it);
        }
        else if(command=='P')
        {
            l.insert(it, c);
        }
    }
    for(it=l.begin();it!=l.end();it++)
    {
        cout << *it;
    }
    cout << endl;

    // Please write your code here.

    return 0;
}
