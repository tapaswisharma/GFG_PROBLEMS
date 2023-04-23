class Solution {
    static int countSquares(int N) {
         if(N==0 || N==1)
  return 0;
  int s=1;
  int k=4;
  int i=5;
    while(k<N)
    {
       if(Math.sqrt(k)==k/Math.sqrt(k))
       s++;
       k+=i;
       i+=2;
    }
       return s; 
    }
}
