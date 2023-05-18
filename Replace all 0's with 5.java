class Solution{
	public static int convertFive(int n){
  if(n == 0) return 5; 
    
    int digit;
    int p = 1;
    int res = 0;
    
    while(n != 0)
    {
        digit = n % 10;
        
        if(digit == 0) digit = 5;
        
        digit *= p;
        res += digit;
        
        p *= 10;
        n /= 10;
    }
    return res;
}
    }
