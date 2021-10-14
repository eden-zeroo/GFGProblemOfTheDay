class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
    	// Your code here
    	unsigned int nobits = sizeof(n) * 8, res = 0;
    	for(int i = 0; i < nobits; i += 2)
    	{
    	    if(n & (1 << i))
    	    {
    	        res |= (1 << (i + 1));
    	    }
    	    if(n & (1 << (i + 1)))
    	    {
    	        res |= (1 << i);
    	    }
    	}
    	return res;
    }
};