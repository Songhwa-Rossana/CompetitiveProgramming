#include <iostream>
#include <vector>

int maxSubArraySum(const std::vector<int>& nums) {
    int maxSum = nums[0];  // ��ʼ������Ϊ��һ��Ԫ��
    int currentSum = nums[0];  // ��ǰ�������

    // �ӵڶ���Ԫ�ؿ�ʼ��������
    for (int i = 1; i < nums.size(); i++) {
        // �жϵ�ǰԪ���Ƿ����֮ǰ������ͼ��ϵ�ǰԪ��
        // ������ڣ����Ե�ǰԪ����Ϊ�µ���������㣬���µ�ǰ�������
        // ���С�ڣ��򽫵�ǰԪ�ؼ��뵱ǰ�����飬�����µ�ǰ�������
        currentSum = std::max(nums[i], currentSum + nums[i]);

        // �жϵ�ǰ��������Ƿ�������ͣ���������������
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
    std::cout << maxSum << std::endl;  // ���: 18

    return 0;
}
