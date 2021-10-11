class Solution{
    public:
    double MedianOfArrays(vector<int>& X, vector<int>& Y)
    {
        // Your code goes here
        int n = X.size();
        int m = Y.size();
        if(m < n)
            return MedianOfArrays(Y, X);
        int low = 0, high = n;
        double med = 0;
        while(low <= high)
        {
            int midX = (low + high) / 2;
            int midY = (n + m + 1) / 2 - midX;
            
            int maxLeftX = (midX == 0) ? INT_MIN : X[midX - 1];
            int minRightX = (midX == n) ? INT_MAX : X[midX];
            
            int maxLeftY = (midY == 0) ? INT_MIN : Y[midY - 1];
            int minRightY = (midY == m) ? INT_MAX : Y[midY];
            
            if(maxLeftX <= minRightY && maxLeftY <= minRightX)
            {
                if((n + m) % 2 == 0)
                    med = (max(maxLeftX, maxLeftY) + min(minRightX, minRightY)) / 2.0;
                else
                    med = max(maxLeftX, maxLeftY);
                break;
            }
            else if(maxLeftX > minRightY)
                high = midX - 1;
            else
                low = midX + 1;
        }
        return med;
    }
};