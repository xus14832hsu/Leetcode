#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        int i = 0;
        while (i < word1.length() || i < word2.length()) {
            if (i < word1.length()) {
                result += word1[i];
            }
            if (i < word2.length()) {
                result += word2[i];
            }
            i++;
        }
        return result;
    }
};

int main() {
    Solution solution;
    string word1 = "abc";
    string word2 = "pqr";
    cout << "Merged String: " << solution.mergeAlternately(word1, word2) << endl;
    
    word1 = "ab";
    word2 = "pqrs";
    cout << "Merged String: " << solution.mergeAlternately(word1, word2) << endl;
    
    word1 = "abcd";
    word2 = "pq";
    cout << "Merged String: " << solution.mergeAlternately(word1, word2) << endl;
    
    return 0;
}
/*
class Solution {
    public:
        string mergeAlternately(string word1, string word2) {
            string result = "";
            int i = 0;
            while (i < word1.length() || i < word2.length()) {
                if (i < word1.length()) {
                    result += word1[i];
                }
                if (i < word2.length()) {
                    result += word2[i];
                }
                i++;
            }
            return result;
        }
    };
*/
// Compare this snippet from leetcode/1768.Merge_Strings_Alternately.cpp: