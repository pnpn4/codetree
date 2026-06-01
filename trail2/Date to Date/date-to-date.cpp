#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    // Please write your code here.
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // 1월 1일부터 m1월 d1일까지 총 일수 구하기
    int total_days1 = d1;
    for(int i = 1; i < m1; i++) total_days1 += num_of_days[i];

    // 1월 1일부터 m2월 d2일까지 총 일수 구하기
    int total_days2 = d2;
    for(int i = 1; i < m2; i++) total_days2 += num_of_days[i];

    cout << total_days2 - total_days1 + 1 << "\n"; // 시작일 포함
    return 0;
}