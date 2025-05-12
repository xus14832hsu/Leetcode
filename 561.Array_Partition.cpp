class Solution {
    public:
        int arrayPairSum(vector<int>& nums) {//表示 pass by address 可以加速執行時間是嗎?
            sort(nums.begin(), nums.end());
            int sum = 0;
            for (int i = 0; i < nums.size(); i += 2) {
                sum += nums[i];
            }
            return sum;
        }
    };