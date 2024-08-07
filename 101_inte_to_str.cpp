class Solution {
public:
    string solve(int n) {
        unordered_map<int, string> belowten = {
            {1, "One"}, {2, "Two"},   {3, "Three"}, {4, "Four"}, {5, "Five"},
            {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
        unordered_map<int, string> belowtwenty = {
            {10, "Ten"},      {11, "Eleven"},    {12, "Twelve"},
            {13, "Thirteen"}, {14, "Fourteen"},  {15, "Fifteen"},
            {16, "Sixteen"},  {17, "Seventeen"}, {18, "Eighteen"},
            {19, "Nineteen"}};
        unordered_map<int, string> belowhundred = {
            {2, "Twenty"}, {3, "Thirty"},  {4, "Forty"}, {5, "Fifty"},
            {6, "Sixty"},  {7, "Seventy"}, {8, "Eighty"}, {9, "Ninety"}};

        if (n < 10) {
            return belowten[n];
        }
        if (n < 20) {
            return belowtwenty[n];
        }
        if (n < 100) {
            return belowhundred[n/10] + ((n%10 != 0) ? " " + belowten[n%10] : "");
        }

        if (n < 1000) {
            // 897
            return belowten[n / 100] + " Hundred" + ((n % 100) == 0
                       ? ""
                       : " " + solve(n % 100));
        }
        if (n < 1000000) {
            return solve(n / 1000) + " Thousand" + ((n % 1000) == 0
                       ? ""
                       : " " + solve(n % 1000));
        }
        if (n < 1000000000) {
            return solve(n / 1000000) + " Million" + ((n % 1000000) == 0
                       ? ""
                       : " " + solve(n % 1000000));
        }
        return solve(n / 1000000000) + " Billion" + ((n % 1000000000 == 0)
                   ? ""
                   : " " + solve(n % 1000000000));
    }
    string numberToWords(int num) {
        if (num == 0) {
            return "Zero";
        }
        return solve(num);
    }
};