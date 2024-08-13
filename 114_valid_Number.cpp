class Solution {
public:
    bool isNumber(string s) {
        bool digitseen = false;
        bool eseen = false;
        bool dotseen = false;

        int cnt = 0;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if (isdigit(ch)) {
                digitseen = true;
            }
            else if (ch == '-' || ch == '+') {
                if (i > 0 && s[i-1] != 'e' && s[i-1] != 'E') {
                    return false;
                }
                if (i == s.length() - 1 || !isdigit(s[i+1]) && s[i+1] != '.' && s[i+1] != 'e' && s[i+1] != 'E') {
                    return false;
                }
            }
            else if (ch == '.') {
                if (dotseen || eseen) {
                    return false;
                }
                if (i == s.length() - 1 && !digitseen) {
                    return false;
                }
                dotseen = true;
            }
            else if (ch == 'e' || ch == 'E') {
                if (i == s.length() - 1 || eseen || !digitseen) {
                    return false;
                }
                eseen = true;
                digitseen = false; // reset digitseen for checking digits after 'e'
            }
            else {
                return false;
            }
        }
        return digitseen;
    }
};
