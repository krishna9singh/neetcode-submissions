
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ans = "";
        int i = 0;

        while (i < s.size()) {
            if (s[i] == '#') {
                if (!ans.empty()) {
                    ans.pop_back();
                }
            } else {
                ans = ans + s[i];
            }
            i++;
        }

        string ans2 = "";
        int j = 0;

        while (j < t.size()) {
            if (t[j] == '#') {
                if (!ans2.empty()) {
                    ans2.pop_back();
                }
            } else {
                ans2 = ans2 + t[j];
            }
            j++;
        }

        return ans == ans2;
    }
};
