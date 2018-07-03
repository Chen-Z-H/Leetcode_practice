class Solution {
    public int maxArea(int[] height) {
        int start = 0, end = height.length - 1;
        int volume = 0, tVolumn = 0;
        while (start != end) {
            tVolumn = (end - start) * Math.min(height[start], height[end]);
            if (tVolumn > volume) {
                volume = tVolumn;
            }
            if (height[start] > height[end]) {
                end--;
            } else {
                start++;
            }
        }
        return volume;
    }
}