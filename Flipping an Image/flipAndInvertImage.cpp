vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
    int row_size = A.size();
    int col_size = A[0].size();
    for (int i = 0; i < row_size; i++) {
        for (int j = 0; j < (col_size + 1) / 2; j++) {
            int temp = !A[i][j];
            A[i][j] = !A[i][col_size - j - 1];
            A[i][col_size - j - 1] = temp;
        }
    }
    return A;
}
