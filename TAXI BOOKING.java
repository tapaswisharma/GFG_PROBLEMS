class Solution {
    public static int minimumTime(int N, int cur, int[] pos, int[] time) {
    
    int minTime = Integer.MAX_VALUE;
    for (int i = 0; i < N; i++) {
        int d = Math.abs(cur - pos[i]);
        int t = d * time[i];
        if (t < minTime) {
            minTime = t;
        }
    }
    return minTime;
}
    }
