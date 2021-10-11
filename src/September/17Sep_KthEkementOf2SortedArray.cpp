class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int res, i = 0, j = 0;
        while(i < n && j < m && k)
        {
            if(arr1[i] < arr2[j])
                res = arr1[i++];
            else
                res = arr2[j++];
            k--;
        }
        while(i < n && k)
        {
            res = arr1[i++];
            k--;
        }
        while(j < m && k)
        {
            res = arr2[j++];
            k--;
        }
        return res;
    }
};