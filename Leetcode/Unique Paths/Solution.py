class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        '''
        @cache
        def dp(i, j):
            if i >= m - 1:
                return 0
            elif j >= n - 1:
                return 0
            elif i >= m - 1 and j >= n - 1:
                return 0
            return 1 + dp(i + 1, j) + dp(i, j + 1)
        return dp(0, 0) + 1
        '''
        dp = [[0 for j in range(n)] for i in range(m)]
        for i in range(m - 2, - 1, -1):
            for j in range(n - 2, -1, -1):
                dp[i][j] = 1 + dp[i + 1][j] + dp[i][j + 1]
        return dp[0][0] + 1
