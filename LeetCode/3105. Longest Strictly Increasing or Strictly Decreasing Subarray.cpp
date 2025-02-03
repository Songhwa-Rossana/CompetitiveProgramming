class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size(), ans = 0, dec = 1, inc = 1;
        if(n == 1) return 1;

        for(int i = 0; i < n-1; i++){
            if (nums[i] > nums[i+1]) dec++, inc = 1;
            else if (nums[i] < nums[i+1]) inc++, dec = 1;
            else dec = inc = 1;
            ans = max({ans, dec, inc});
        }
        return ans;
    }
};
