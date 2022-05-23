class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        n = len(matrix)
        
        for i in range(n):
            row = matrix[n-i-1]
            for j in range(n):
                matrix[j].append(row[j])
        for i in range(n):
            matrix[i] = matrix[i][n:]