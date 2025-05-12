#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        vector<int> runcode(vector<int>& nums) {
            vector<int> results(nums.size());
            results[0] = nums[0];
            for(int i = 1; i < nums.size(); i++) {
                results[i] = nums[i] + results[i - 1];
            }
            return results;
        }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = sol.runcode(nums);

    for(int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

/* c++ code
Problem: Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]¡Knums[i]).
Return the running sum of nums.
class Solution {
    public:
        vector<int> runningSum(vector<int>& nums) {
            vector<int> results(nums.size());
            results[0] = nums[0];
            for(int i = 1; i < nums.size(); i++) {
                results[i] = nums[i] + results[i - 1];
            }
            return results;
        }
    };
*/
/* JAVA code
class Solution {
    public int[] runningSum(int[] nums) {
        int[] results = new int[nums.length];
        results[0] = nums[0];
        for(int i=1;i<nums.length;i++){
            results[i] = nums[i] + results[i - 1];
        }
        return results;
    }
}*/