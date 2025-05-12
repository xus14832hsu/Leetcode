/*class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashmap; // 用來記錄數值和位置
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (hashmap.count(complement)) {
                return {hashmap[complement], i};
            }
            hashmap[nums[i]] = i;
        }
        return {};//回傳空的 vector<int>
    }
};*/
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashmap;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (hashmap.count(complement)) {
                return {hashmap[complement], i};
            }
            hashmap[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution sol;

    int n;
    cout << "請輸入陣列長度: ";
    cin >> n;

    vector<int> nums(n);
    cout << "請輸入 " << n << " 個整數作為陣列元素:\n";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int target;
    cout << "請輸入目標值 target: ";
    cin >> target;

    vector<int> result = sol.twoSum(nums, target);

    if (!result.empty()) {
        cout << "找到符合條件的索引: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "找不到任何兩數之和為 target 的組合。" << endl;
    }

    return 0;
}
