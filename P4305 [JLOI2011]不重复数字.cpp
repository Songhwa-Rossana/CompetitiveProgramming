#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

void removeDuplicates(vector<int>& nums) {
    unordered_set<int> seen;
    vector<int> result;

    for (int num : nums) {
        if (seen.find(num) == seen.end()) {
            seen.insert(num);
            result.push_back(num);
        }
    }

    nums = result;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        removeDuplicates(nums);

        for (int num : nums) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}

