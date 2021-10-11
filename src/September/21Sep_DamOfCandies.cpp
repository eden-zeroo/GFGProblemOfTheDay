class Solution{
    
    public:
    int maxCandy(int height[], int n) 
    { 
        // Your code goes here
        int res = 0, i = 0, j = n - 1;
        while(i < j)
        {
            if((j - i - 1) * min(height[i], height[j]) > res)
                res = (j - i - 1) * min(height[i], height[j]);
            if(height[i] < height[j])
                i++;
            else
                j--;
        }
        return res;
    }   
};