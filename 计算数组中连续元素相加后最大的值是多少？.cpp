#include <iostream>
#include <vector>

int maxSubArraySum(const std::vector<int>& nums) {
    int maxSum = nums[0];  // 初始化最大和为第一个元素
    int currentSum = nums[0];  // 当前子数组和

    // 从第二个元素开始遍历数组
    for (int i = 1; i < nums.size(); i++) {
        // 判断当前元素是否大于之前子数组和加上当前元素
        // 如果大于，则以当前元素作为新的子数组起点，更新当前子数组和
        // 如果小于，则将当前元素加入当前子数组，并更新当前子数组和
        currentSum = std::max(nums[i], currentSum + nums[i]);

        // 判断当前子数组和是否大于最大和，如果是则更新最大和
        maxSum = std::max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
    }
    int maxSum = maxSubArraySum(nums);
    std::cout << maxSum << std::endl;  // 输出: 18

    return 0;
}
