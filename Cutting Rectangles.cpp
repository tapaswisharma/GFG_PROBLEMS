class Solution{
public:
    vector<long long int> minimumSquares(long long int L, long long int B)
    {
       long long int res= __gcd(L,B);
      return {L*B/(res*res),res};
    }
};
