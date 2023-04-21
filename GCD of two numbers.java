class Solution
{
    public int gcd(int A , int B) 
    { 
       if(A == B){
           return A;
       }
       if(A == 0 || B== 0){
           return A==0 ? B: A;
       }            
      return gcd(A%B, B%A);
    } 
}
