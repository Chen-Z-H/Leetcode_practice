class Solution {
    public:
	string longestCommonPrefix(vector<string>& strs) {
	    if (strs.size() == 0) {
		return "";
	    }
	    string prefix = "";
	    bool flag = true;
	    int str_num = strs.size();
	    int p = 0;
	    for (int j = 0; j < strs[0].size(); j++) {
		char t_prefix = ' ';
		for (int i = 0; i < str_num; i++) {
		    if (strs[i].size() < p + 1) {
			return prefix;
		    }
		    if (i == 0) {
			t_prefix = strs[i][p];
		    }
		    if (strs[i][p] != t_prefix) {
			return prefix;
		    }
		}
		prefix += t_prefix;
		p++;
	    }
	    return prefix;
	}
};