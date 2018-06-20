package com.company;

import java.util.List;
import java.util.ArrayList;

public class Solution {

    /**
     * ZigZag Conversion
     */
    public String convert(String s, int numRows) {
        ArrayList<StringBuilder> str_list = new ArrayList<>();

        for (int i = 0; i < numRows; i++) {
            str_list.add(new StringBuilder());
        }

        int curRow = 0;
        boolean down = true;
        for (int i = 0; i < s.length(); i++) {
            str_list.get(curRow).append(s.charAt(i));
            if (down && (curRow < numRows - 1)) {
                curRow ++;
            } else if (!down && (curRow > 0)){
                curRow --;
            }
            if (down && (curRow == numRows - 1)) {
                down = false;
            } else if (!down && (curRow == 0)){
                down = true;
            }
        }

        StringBuilder ret = new StringBuilder();
        for (int i = 0; i < str_list.size(); i++) {
            ret.append(str_list.get(i));
        }
        return ret.toString();
    }

}
