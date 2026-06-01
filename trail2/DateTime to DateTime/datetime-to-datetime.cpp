#include <iostream>

using namespace std;

int A, B, C;

int main() {
    cin >> A >> B >> C;

    // Please write your code here.
    long long start_mins = (11 * 24 * 60) + (11 * 60) + 11;
    // 목표 시각을 분으로 변환
    long long end_mins = (A * 24 * 60) + (B * 60) + C;

    if(end_mins < start_mins) {
        cout << -1 << "\n";
    } else {
        cout << end_mins - start_mins << "\n";
    }

    return 0;
}