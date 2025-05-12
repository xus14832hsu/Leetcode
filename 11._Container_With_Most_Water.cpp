#include <iostream>
#include <vector>

using namespace std;

int maxArea(vector<int>& height) {
    int water = 0;
    int i = 0, j = height.size() - 1;
    while (i < j) {
        water = max(water, (j - i) * min(height[i], height[j]));
        if (height[i] < height[j]) {
            i++;
        } else {
            j--;
        }
    }
    return water;
}

int main() {
    int n;
    cout << "Enter the number of height elements: ";
    cin >> n;
    
    vector<int> height(n);
    cout << "Enter height values: ";
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }
    
    cout << "Maximum water area: " << maxArea(height) << endl;
    
    return 0;
}

/*class Solution {
public:
    int maxArea(vector<int>& height) {
         int water = 0;
         int i=0, j = height.size()-1;
         while(i<j){
            water = max(water,(j-i)*min(height[i],height[j]));
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
         }
         return water;
    }
};*/