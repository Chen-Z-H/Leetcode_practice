class Solution {
/**
 * Palindrome Number
 */
bool isPalindrome(int x) {
    /*int reversed = 0;
    int original = x;
    while(x >= 1) {
        int right = x % 10;
        x = x / 10;
        reversed = (reversed * 10 + right);
    }
    cout << reversed << endl;

    return (reversed == original) ? true : false;*/
    /// 如果这个数字不是0而且末尾是0，那么它必然是不对称的
    if (x % 10 == 0 && x != 0) return false;

    int reversed = 0;
    while(x > reversed) {
        reversed = (reversed * 10 + x % 10);
        x = x / 10;
    }

    return reversed == x || reversed / 10 == x;
}
};