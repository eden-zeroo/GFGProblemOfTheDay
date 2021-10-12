class Solution{
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    sort(arr, arr + n);
	    long long res = 0;
	    for(int i = 0; i < n - 2; i++)
	    {
	        int j = i + 1;
	        int k = n - 1;
	        while(j < k)
	        {
	            if((arr[i] + arr[j] + arr[k]) < sum)
	            {
	                res += (k - j);
	                j++;
	            }
	            else
	            {
	                k--;
	            }
	        }
	    }
	    return res;
	}
};