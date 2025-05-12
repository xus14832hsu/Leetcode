#include <iostream>
#include <stack>

using namespace std;

bool isValid(string s) {
    stack<char> str;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            str.push(c);
        } else {
            if (str.empty()) return false;
            if ((c == ')' && str.top() == '(') ||
                (c == ']' && str.top() == '[') ||
                (c == '}' && str.top() == '{')) {
                str.pop();
            } else {
                return false;
            }
        }
    }
    return str.empty();
}

int main() {
    string s;
    cout << "Enter a string of parentheses: ";
    cin >> s;
    
    if (isValid(s)) {
        cout << "The string is valid." << endl;
    } else {
        cout << "The string is not valid." << endl;
    }
    
    return 0;
}


/*class Solution {
public:
    bool isValid(string s) {
        stack <char> str;
        for(int i=0;i<s.size();i++){
            if(s[i] == '(') str.push(s[i]);
            if(s[i] == '[') str.push(s[i]);
            if(s[i] == '{') str.push(s[i]);

            if(s[i] == ')'){
                if(str.empty()){
                    return false;
                }
                if(str.top() == '('){
                    str.pop();
                }else{
                    return false;
                }  
            } 
              if(s[i] == ']'){
                if(str.empty()){
                    return false;
                }
                if(str.top() == '['){
                    str.pop();
                }else{
                    return false;
                } 
            }
              if(s[i] == '}'){
                if(str.empty()){
                    return false;
                }
                if(str.top() == '{'){
                    str.pop();
                }else{
                    return false;
                }  
            }
        
        }
        if(str.empty()){
            return true;
        }else{
            return false;
        }
    }
};*/