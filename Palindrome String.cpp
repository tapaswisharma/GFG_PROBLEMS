class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	     int cnt=0;
    int n=S.size();
    for(int i=0;i<(n/2);i++)
    {
        if(S[i]==S[n-i-1])
            cnt++;
    }
    if (cnt==n/2)
        return 1;
    else
        return 0;
	}

};
