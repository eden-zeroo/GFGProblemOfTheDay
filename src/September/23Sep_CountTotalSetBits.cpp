class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int findLargestPower(int n)
    {
        int x = 0;
        while ((1 << x) <= n)
            x++;
        return x - 1;
    }
    int countSetBits(int n)
    {
        if (n <= 1)
            return n;
        int x = findLargestPower(n);
        return (x * pow(2, (x - 1))) + (n - pow(2, x) + 1) + countSetBits(n - pow(2, x));
    }
};