// 这里我写的不太好，参考一下答案
class Solution {
public:
    int reverse(int x) {
        long reversed = 0;
        int length = 0;
        queue<int> nums;
        while (x >= 1 || x <= -1) {
            length ++;
            int num = x % 10;
            x = x / 10;
            nums.push(num);
        }
        for (int i = length - 1; i >= 0; i--) {
            reversed += nums.front() * pow(10, i);
            nums.pop();
        }
        
        int limit = pow(2, 31);
        if (reversed >= limit || reversed < - limit - 1) {
            return 0;
        }
        return (int)reversed;
    }
};