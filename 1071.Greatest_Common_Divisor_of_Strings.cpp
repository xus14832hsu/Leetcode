#include <iostream>
#include <string>
#include <numeric>

using namespace std;

string gcdOfStrings(string str1, string str2) {
    return (str1 + str2 == str2 + str1) ?
        str1.substr(0, gcd(size(str1), size(str2))) : "";
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    
    string result = gcdOfStrings(str1, str2);
    if (!result.empty()) {
        cout << "Greatest Common Divisor of Strings: " << result << endl;
    } else {
        cout << "No common divisor string found." << endl;
    }
    
    return 0;
}
/*  class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        return (str1 + str2 == str2 + str1)? 
        str1.substr(0, gcd(size(str1),size(str2))): "";
    }
};
class Solution {
    public boolean valid(String str1, String str2, int k) {
        int len1 = str1.length(), len2 = str2.length();
        if (len1 % k > 0 || len2 % k > 0) {
            return false;
        } else {
            String base = str1.substring(0, k);
            return str1.replace(base, "").isEmpty() && str2.replace(base, "").isEmpty();
        }
    }
    
    
    public String gcdOfStrings(String str1, String str2) {
        int len1 = str1.length(), len2 = str2.length();
        for (int i = Math.min(len1, len2); i >= 1; --i) {
            if (valid(str1, str2, i)) {
                return str1.substring(0, i);
            }
        }
        return "";
    }
}*/