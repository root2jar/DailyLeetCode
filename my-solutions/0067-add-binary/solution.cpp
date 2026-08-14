class Solution {
public:
    string addBinary(string a, string b) {
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;
       string ans = "";
    while (i >= 0 || j >= 0 || carry != 0) {
        int digitA = 0;
        int digitB = 0;
        if (i >= 0) {
            digitA = a[i] - '0';
        }
        if (j >= 0) {
            digitB = b[j] - '0';
        }
        int sum = digitA + digitB + carry;
        int digit = sum % 2;
        carry = sum / 2;
        ans += (digit + '0');
        i--;
        j--;
    }
    reverse(ans.begin(), ans.end());
    return ans;
       }
};
