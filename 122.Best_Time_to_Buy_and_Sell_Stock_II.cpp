#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {
    int arr = 0;
    for (int i = 0; i < prices.size() - 1; i++) {
        if (prices[i + 1] > prices[i]) {
            arr += prices[i + 1] - prices[i];
        }
    }
    return arr;
}

int main() {
    int n;
    cout << "Enter the number of days: ";
    cin >> n;
    
    vector<int> prices(n);
    cout << "Enter stock prices: ";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    
    cout << "Maximum profit: " << maxProfit(prices) << endl;
    
    return 0;
}

/*class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int arr=0;
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i+1]>prices[i]){
                arr += prices[i+1]-prices[i];
            }
        }
        return arr;
    }
};*/