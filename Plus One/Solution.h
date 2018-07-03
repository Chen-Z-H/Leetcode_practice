class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int flag = 0;
        int end = digits.size() - 1;
        digits[end] += 1;
        for (int i = end; i >= 0; i--) {
            digits[i] = digits[i] + flag;
            if (digits[i] >= 10) {
                digits[i] -= 10;
                flag = 1;
            } else {
                break;
            }
            if (!i && flag) {
                digits.insert(digits.begin(), 1);
            }
        }
        return digits;
    }
};