class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here
        int left = 0, right = n - 1, mid = 0;
        while(mid <= right)
        {
            if(a[mid] == 0)
            {
                swap(a[left], a[mid]);
                left++;
                mid++;
            }
            else if(a[mid] == 2)
            {
                swap(a[right], a[mid]);
                right--;
            }
            else
                mid++;
        }
    }
    
};