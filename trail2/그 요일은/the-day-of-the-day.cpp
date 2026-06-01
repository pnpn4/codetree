#include <iostream>
#include <string>

using namespace std;

// 1월 1일 기준으로 총 몇 번째 날인지 계산하는 함수
int get_total_days(int m, int d) {
    // 2024년은 윤년이므로 2월은 29일
    int num_of_days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total = d;
    for (int i = 1; i < m; i++) {
        total += num_of_days[i];
    }
    return total;
}

// 문자열 요일을 숫자로 매핑 (시작일이 월요일이므로 Mon을 0으로 기준 잡음)
int day_to_num(const string& day) {
    if (day == "Mon") return 0;
    if (day == "Tue") return 1;
    if (day == "Wed") return 2;
    if (day == "Thu") return 3;
    if (day == "Fri") return 4;
    if (day == "Sat") return 5;
    if (day == "Sun") return 6;
    return -1;
}

int main() {
    // 입출력 속도 최적화 치트키
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m1, d1, m2, d2;
    string target_day;

    // 변수 입력 받기
    if (!(cin >> m1 >> d1 >> m2 >> d2 >> target_day)) return 0;

    int total_days1 = get_total_days(m1, d1);
    int total_days2 = get_total_days(m2, d2);
    
    int diff = total_days2 - total_days1;
    int target_day_num = day_to_num(target_day);
    
    int ans = 0;
    // 시작일(0)부터 종료일(diff)까지 하루씩 더해가며 타겟 요일인지 확인
    for (int i = 0; i <= diff; i++) {
        // m1월 d1일이 월요일(0)이므로, i일이 지난 시점의 요일은 i % 7
        if (i % 7 == target_day_num) {
            ans++;
        }
    }

    cout << ans << "\n";

    return 0;
}