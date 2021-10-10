/*
Given a binary string S consisting of 0s and 1s.
The task is to find the maximum difference of the number of 0s and the number of 1s (number of 0s – number of 1s) 
in the substrings of a string.

Note: In the case of all 1s, the answer will be -1.
*/
class Solution{
public:	
	int maxSubstring(string S)
	{
	    // Your code goes here
	    int maxsum = -1, sum = -1;
	    if(S[0] == '0')
	    {
	        sum = 1;
	        maxsum = 1;
	    }
	    for(int i = 1; i < S.size(); i++)
	    {
	        if(S[i] == '0')
	            sum = max(1, sum + 1);
	        else
	            sum = max(-1, sum - 1);
	        maxsum = max(sum, maxsum);
	    }
	    return maxsum;
	}
};