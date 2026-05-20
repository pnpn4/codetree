#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Please write your code here.
    queue<int> q;
    int n, k;
    cin >> n >> k;
    for(int i=1;i<=n;i++)
        q.push(i);
    while(!q.empty())
    {
        for(int i=1;i<k;i++)
        {
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}