#include <iostream>
#include <string>
#include <deque>

using namespace std;

int N;
string cmd[10000];
int n;

int main() {
    cin >> N;
    deque<int> dq;
    for (int i = 0; i < N; i++) {
        cin >> cmd[i];
        if (cmd[i] == "push_front" || cmd[i] == "push_back") {
            cin >> n;
        }
        if(cmd[i]=="push_front")
            dq.push_front(n);
        else if(cmd[i]=="push_back")
            dq.push_back(n);
        else if(cmd[i]=="pop_front")
        {
            cout << dq.front()<<endl;
            dq.pop_front();
        }
        else if(cmd[i]=="pop_back")
        {
            cout << dq.back()<<endl;
            dq.pop_back();
        }
        else if(cmd[i]=="size")
            cout << dq.size() << endl;
        else if(cmd[i]=="empty")
            cout << dq.empty() << endl;
        else if(cmd[i]=="front")
            cout << dq.front() << endl;
        else if(cmd[i]=="back")
            cout << dq.back() << endl;
    }

    // Please write your code here.

    return 0;
}
