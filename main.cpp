class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        bool wordStarted = false;
        
        for (int i = s.size() - 1; i >= 0; --i) {
            if (s[i] == ' ') {
                if (wordStarted) {
                    break;
                }
            }
            else {
                len++;
                wordStarted = true;
            }
        }
        
        return len;
    }
};
