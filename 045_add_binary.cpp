class Solution {
public:
    string addBinary(string a, string b) {
        // Ensure both strings are of the same length by padding with zeros at the beginning
        int maxLen = max(a.size(), b.size());
        while (a.size() < maxLen) {
            a = '0' + a;
        }
        while (b.size() < maxLen) {
            b = '0' + b;
        }

        int carry = 0;
        string res = "";
        for (int i = maxLen - 1; i >= 0; i--) {
            int sum = (a[i] - '0') + (b[i] - '0') + carry;
            res = char((sum % 2) + '0') + res;
            carry = sum / 2;
        }
        if (carry == 1) {
            res = '1' + res;
        }
        return res;
    }
};
