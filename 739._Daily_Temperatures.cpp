#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures) {
    int n = temperatures.size();
    vector<int> ans(n, 0);
    stack<int> s;
    
    for (int i = 0; i < n; i++) {
        while (!s.empty() && temperatures[i] > temperatures[s.top()]) {
            int idx = s.top();
            s.pop();
            ans[idx] = i - idx;
        }
        s.push(i);
    }
    
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of temperature readings: ";
    cin >> n;
    
    vector<int> temperatures(n);
    cout << "Enter temperature values: ";
    for (int i = 0; i < n; i++) {
        cin >> temperatures[i];
    }
    
    vector<int> result = dailyTemperatures(temperatures);
    
    cout << "Days until a warmer temperature: ";
    for (int res : result) {
        cout << res << " ";
    }
    cout << endl;
    
    return 0;
}

/*class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector <int> ans(n,0);

        stack <int> s,k;
        for(int i=0;i<n; i++){
            while(!s.empty()){
                if(temperatures[i] <= s.top()){
                    break;
                }
                else{
                    ans[k.top()] = i-k.top();
                    k.pop();
                    s.pop();
                }
            }
            if(i == n-1){
                break;
            }
            if(temperatures[i]<temperatures[i+1]){
                ans[i] = 1;
            }
            else{
                s.push(temperatures[i]);
                k.push(i);
            }
            
        }
        return ans;
    }
};*/