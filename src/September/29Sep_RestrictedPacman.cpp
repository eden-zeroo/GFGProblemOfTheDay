class Solution{
    public:
    int candies(int m, int n) 
    { 
    	// Your code goes here
        int max = (m * n) - m - n;
        int  count = max / 2 + 1; 
        return count;
    } 
};