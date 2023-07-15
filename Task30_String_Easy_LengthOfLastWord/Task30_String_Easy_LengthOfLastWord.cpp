#include <iostream>

class Solution {
public:
    static int lengthOfLastWord(std::string s) {
        int count = 0, n = s.size() - 1;
        while (s[n] == ' ')
            n--;
        while (n >= 0 && s[n] != ' ') {
            count++;
            n--;
        }
        return count;
    }
};

int main()
{
    std::string s = "   fly me   to   the moon  ";
    std::cout << Solution::lengthOfLastWord(s);
}
