class Solution {
  public:
    int isDigitSumPalindrome(int N) {
       int rem,rev = 0, sum = 0;
        // code for find sum of digit
        while(N!=0){
            rem = N%10; 
            sum += rem;
            N /= 10; 
        }
        
        //code for find reverse
        int temp = sum;
        while(temp!=0){
            rem = temp%10;
             rev = rev*10 + rem;
            temp /=10;
        }
        // check pallindrome
        if(rev == sum)
            return 1;
        else
            return 0;
    }
};
