#include <iostream>
#include <vector>

using namespace std;

void sortColors(vector<int>& nums) {
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            a++;
        } else if (nums[i] == 1) {
            b++;
        } else {
            c++;
        }
    }
    
    int index = 0;
    for (int i = 0; i < a; i++) nums[index++] = 0;
    for (int i = 0; i < b; i++) nums[index++] = 1;
    for (int i = 0; i < c; i++) nums[index++] = 2;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the elements (0, 1, or 2): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    sortColors(nums);
    
    cout << "Sorted colors: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}

/*class Solution {
    public:
        void sortColors(vector<int>& nums) {
            int a=0, b=0, c=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                    a++;
                }else if(nums[i]==1){
                    b++;
                }else{
                    c++;
                }
            }
            vector<int> arr;
            for(int i=0;i<a;i++){
                arr.push_back(0);
            }
            for(int i=0;i<b;i++){
                arr.push_back(1);
            }
            for(int i=0;i<c;i++){
                arr.push_back(2);
            }
            nums =arr;
        }
    };
*/