vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> coor;
    for (int i = 0; i < nums.size() - 1; i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                coor.push_back(i);
                coor.push_back(j);
                return coor;
            }
        }
    }
}
