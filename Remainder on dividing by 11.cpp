class Solution
{

public:
    int xmod11(string x)
    {
       int mod_sum = 0;
    int factor = 1;

    // Iterate over the digits of x from right to left
    for (int i = x.size() - 1; i >= 0; i--) {
        int digit = x[i] - '0';
        mod_sum = (mod_sum + factor * digit) % 11;
        factor = (factor * 10) % 11;
    }

    return mod_sum;
    
    }
};
