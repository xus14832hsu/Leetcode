#include <iostream>
#include <vector>

using namespace std;

int search(vector<int>& nums, int target) {
    int s = nums.size();
    int mid;
    int high = s - 1, low = 0;
    while (low <= high) {
        mid = (high + low) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    int n, target;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Enter target value: ";
    cin >> target;
    
    int result = search(nums, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    
    return 0;
}
/*class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = nums.size();
        int mid;
        int high = s-1, low = 0;
        while(low <= high){
            mid = (high + low)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return -1;
    }
};class Solution {
    public int search(int[] nums, int target) {
        int low = 0;
        int high = nums.length - 1;

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(nums[mid] == target){
                return mid;
            }
            else if(target < nums[mid]){
                high = mid - 1;
            }
            else if(target > nums[mid]){
                low = mid + 1;
            }
        }
        return -1;
    }
}*/