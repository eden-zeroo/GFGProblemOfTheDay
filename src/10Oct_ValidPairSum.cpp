class Solution{
    
    public:
    long long ValidPair(int a[], int n) 
    { 
    	// Your code goes here 
    	sort(a, a + n);
    	long long res = 0;
    	for(int i = 0; i < n; i++)
    	{
    	    if(a[i] >= 0)
    	    {
    	        long long positive = n - i;
    	        res += positive * (positive - 1) / 2;
    	        break;
    	    }
    	    else
    	    {
    	        long long positive = (a + n) - upper_bound(a, a + n, (-1 * a[i]));
    	        res += positive;
    	    }
    	    //cout << res << " ";
    	}
    	return res;
    }   
};