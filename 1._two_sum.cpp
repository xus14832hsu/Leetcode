/*class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashmap; // �ΨӰO���ƭȩM��m
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (hashmap.count(complement)) {
                return {hashmap[complement], i};
            }
            hashmap[nums[i]] = i;
        }
        return {};//�^�ǪŪ� vector<int>
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
    cout << "�п�J�}�C����: ";
    cin >> n;

    vector<int> nums(n);
    cout << "�п�J " << n << " �Ӿ�Ƨ@���}�C����:\n";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int target;
    cout << "�п�J�ؼЭ� target: ";
    cin >> target;

    vector<int> result = sol.twoSum(nums, target);

    if (!result.empty()) {
        cout << "���ŦX���󪺯���: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "�䤣������Ƥ��M�� target ���զX�C" << endl;
    }

    return 0;
}
