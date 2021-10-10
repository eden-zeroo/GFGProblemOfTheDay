class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector< pair<int, int> > meet(n);
        for(int i = 0; i < n; i++)
            meet[i] = {end[i], start[i]};
        sort(meet.begin(), meet.end());
        int res = 1, last = meet[0].first;
        for(int i = 1; i < n ;i++)
        {
            if(meet[i].second > last)
            {
                res++;
                last = meet[i].first;
            }
        }
        return res;
    }
};