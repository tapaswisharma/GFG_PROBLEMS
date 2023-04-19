class Solution {
    public int countWaystoDivide(int N, int K) {
        int[][] dp = new int[N+1][K+1];

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= K; j++) {
            if (j == 1) {
                dp[i][j] = 1;
            } else if (i == j) {
                dp[i][j] = 1;
            } else if (i < j) {
                dp[i][j] = 0;
            } else {
                dp[i][j] = dp[i-1][j-1] + dp[i-j][j];
            }
        }
    }

    return dp[N][K];
}
    }
