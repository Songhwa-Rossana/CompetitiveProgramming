#include <iostream>
#include <vector>
#include <unordered_map>

int recoverInitialNumber(std::vector<int>& nums) {
    std::unordered_map<int, int> countMap;
    for (int num : nums) {
        countMap[num]++;
    }
    int result;
    for (auto& pair : countMap) {
        if (pair.second == 1) {
            result = pair.first;
            break;
        }
    }
    return result;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            std::cin >> nums[i];
        }

        int answer = recoverInitialNumber(nums);
        std::cout << answer << "\n";
    }

    return 0;
}
