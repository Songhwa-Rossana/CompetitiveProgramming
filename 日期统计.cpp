#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
    int arr[100] = {5, 6, 8, 6, 9, 1, 6, 1, 2, 4, 9, 1, 9, 8, 2, 3, 6, 4, 7, 7, 5, 9, 5, 0, 3, 8, 7, 5, 8, 1, 5, 8, 6, 1, 8, 3, 0, 3, 7, 9, 2, 7, 0, 5, 8, 8, 5, 7, 0, 9, 9, 1, 9, 4, 4, 6, 8, 6, 3, 3, 8, 5, 1, 6, 3, 4, 6, 7, 0, 7, 8, 2, 7, 6, 8, 9, 5, 6, 5, 6, 1, 4, 0, 1, 0, 0, 9, 4, 8, 0, 9, 1, 2, 8, 5, 0, 2, 5, 3, 3};

    unordered_set<string> dates; // 用于存储不同的日期

    for (int i = 0; i <= 100 - 8; i++) {
        string date = to_string(arr[i]) + to_string(arr[i+1]) + to_string(arr[i+2]) + to_string(arr[i+3]) + to_string(arr[i+4]) + to_string(arr[i+5]) + to_string(arr[i+6]) + to_string(arr[i+7]);

        // 检查日期是否满足条件
        if (date >= "20230101" && date <= "20231231") {
            dates.insert(date);
        }
    }

    cout << dates.size() << endl;

    return 0;
}

