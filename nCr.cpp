class Solution{
public:
    int nCr(int n, int r){
      int mod = 1e9 + 7;   
    int a[n + 1][r + 1];
    
    if (n == r)
        return 1;
        
    if(n < r)
        return 0;

    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= r; j++){
            
            if (i == j || j == 0)
                a[i][j] = 1;

            else
                a[i][j] =(a[i - 1][j] % mod) + (a[i - 1][j - 1] % mod) % mod;
        }
    }

    return (a[n][r] % mod);
    }
};
