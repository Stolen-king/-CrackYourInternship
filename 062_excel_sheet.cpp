class Solution {
public:
    string convertToTitle(int n) {
        if (n < 27) {
            string s = "";
            s += ('A' + (n - 1) % 26);
            return s;
        }
        string a = "";
        while (n > 0) {
            if (n % 26 == 0) {
                a += 'A'+25;
                n--;
            } else {
                a += ('A' + (n - 1) % 26);
            }
            n = n / 26;
        }
        reverse(a.begin(), a.end());

        return a;
    }
};