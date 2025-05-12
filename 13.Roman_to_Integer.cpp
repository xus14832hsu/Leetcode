#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int result = 0;

        for (int i = s.length() - 1; i >= 0; i--) {
            if (i < s.length() - 1 && getValue(s[i]) < getValue(s[i + 1])) {
                result -= getValue(s[i]);
            } else {
                result += getValue(s[i]);
            }
        }

        return result;
    }

private:
    int getValue(char c) {
        switch (c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
};

int main() {
    Solution solution;
    string roman = "MCMXCIV";
    cout << "The integer value of " << roman << " is " << solution.romanToInt(roman) << endl;
    return 0;
}
// Compare this snippet from Branch_and_Bound/Divide_And_Conquer.cpp:
/*class Solution {
    public:
        int romanToInt(string s) {
            int result = 0;
    
            for(int i = s.length() - 1; i >= 0; i--)
            {
                if(getValue(s[i]) < getValue(s[i + 1]))
                {
                    result -= getValue(s[i]);
                }
                else
                    result += getValue(s[i]);
            }
    
            return result;
        }
    
        int getValue(char c)
        {
            switch(c) {
                case 'I': return 1;
                case 'V': return 5;
                case 'X': return 10;
                case 'L': return 50;
                case 'C': return 100;
                case 'D': return 500;
                case 'M': return 1000;
                default: return 0;
            }
        }
    };
*/