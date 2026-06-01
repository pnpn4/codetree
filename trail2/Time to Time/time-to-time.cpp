#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    int start_time = A * 60 + B;
    int end_time = C * 60 + D;
    cout << end_time - start_time << "\n";
    return 0;
}