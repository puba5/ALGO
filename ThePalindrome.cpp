#include <iostream>
#include <string>


using namespace std;

class ThePalindrome {
public:
    int find(string s) {

        for (int i = s.size();; i++) {
            bool flag = true;
            for (int j = 0; j < s.size(); j++) {
                if ((i - j - 1) < s.size() && s[j] != s[i - j - 1]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                return i;
            }
        }
    }
};