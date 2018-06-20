package com.company;

import java.util.List;
import java.util.ArrayList;

public class Solution {

    /**
     * Generate Parentheses
     */
    private List<String> par = new ArrayList<>();

    public List<String> generateParenthesis(int n) {
        StringBuilder strb = new StringBuilder();
        for (int i = 0; i < n; i++) {

        }
        return par;
    }

    /**
     * Valid Tic-Tac-Toe State, 这样写有一定的扩展性
     * @param board
     * @return
     */
    public boolean validTicTacToe(String[] board) {
        int length = board.length;
        int numWin = 0;
        int numX = 0, numO = 0;
        boolean XWin = false, OWin = false;

        for (String s: board) {
            for (int i = 0; i < length; i++) {
                if (s.charAt(i) == 'X') {
                    numX ++;
                } else if (s.charAt(i) == 'O') {
                    numO ++;
                }
            }
            if (!s.contains(" ")) {
                if (!s.contains("O")) {
                    numWin ++; XWin = true;
                } else if (!s.contains("X")) {
                    numWin ++; OWin = true;
                }
            }
        }
        if (numWin > 1) return false;
        numWin = 0;
        // Check the columns
        for (int i = 0; i < length; i++) {
            char pre = board[0].charAt(i);
            if (pre == ' ') continue;
            for (int j = 1; j < length; j++) {
                char cur = board[j].charAt(i);
                if (cur != pre) {
                    break;
                } else if (j == length - 1) {
                    numWin ++;
                    if (cur == 'X') XWin = true;
                    if (cur == 'Y') OWin = true;
                }
            }
        }

        // Check the diagonals
        char pre1 = board[0].charAt(0);
        if (pre1 != ' ') {
            for (int i = 1; i < length; i++) {
                char cur = board[i].charAt(i);
                if (cur != pre1) {
                    break;
                }
                if (i == length - 1) {
                    if (cur == 'X') XWin = true;
                    if (cur == 'O') OWin = true;
                }
            }
        }
        char pre2 = board[length - 1].charAt(0);
        if (pre2 != ' ') {
            for (int i = 1; i < length; i++) {
                char cur = board[length - i - 1].charAt(i);
                if (cur != pre2) {
                    break;
                }
                if (i == length - 1) {
                    if (cur == 'X') XWin = true;
                    if (cur == 'O') OWin = true;
                }
            }
        }
        return !(numX < numO || Math.abs(numX-numO) > 1 || numWin > 1 || (XWin && (numX <= numO)) || (OWin && (numX != numO)));
    }

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
