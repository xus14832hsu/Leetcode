#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int start = 0, end = numbers.size() - 1;
    vector<int> arr;
    while (start < end) {
        if (numbers[start] + numbers[end] == target) {
            arr.push_back(start + 1);
            arr.push_back(end + 1);
            break;
        }
        if (numbers[start] + numbers[end] > target) {
            end--;
        } else {
            start++;
        }
    }
    return arr;
}

int main() {
    int n, target;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> numbers(n);
    cout << "Enter sorted numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    cout << "Enter target sum: ";
    cin >> target;
    
    vector<int> result = twoSum(numbers, target);
    
    if (!result.empty()) {
        cout << "Indices: " << result[0] << " " << result[1] << endl;
    } else {
        cout << "No two numbers found that sum up to target." << endl;
    }
    
    return 0;
}
/*class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0, end = numbers.size()-1, total;
        vector <int> arr;
        while(start<end){
            if(numbers[start] + numbers[end] == target){
                arr.push_back(start+1);
                arr.push_back(end+1);

                break;
            }  
            if(numbers[start] + numbers[end] > target){
                end--;
            }else{
                start++;
            }
        }
        return arr;
    }
};
->*/