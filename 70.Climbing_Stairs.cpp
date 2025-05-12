#include <iostream>

using namespace std;

int climbStairs(int n) {
    int arr[46] = {};
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i < 46; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[n];
}

int main() {
    int n;
    cout << "Enter the number of steps: ";
    cin >> n;
    
    if (n < 0 || n > 45) {
        cout << "Invalid input. Please enter a number between 0 and 45." << endl;
        return 1;
    }
    
    cout << "Ways to climb " << n << " steps: " << climbStairs(n) << endl;
    return 0;
}
/*class Solution {
public:
    int climbStairs(int n) {
        int arr[46]={};
        arr[0] = 1;
        arr[1] = 1;
        for(int i= 2;i<46;i++){
            arr[i] = arr[i-1] + arr[i-2];
        }
        return arr[n];
    }
};*/