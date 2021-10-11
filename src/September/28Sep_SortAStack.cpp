void SortedStack :: sort()
{
   //Your code here
   vector<int> arr;
   while(!s.empty())
   {
       arr.push_back(s.top());
       s.pop();
   }
   int n = arr.size();
   
   for(int i = 0; i < n; i++)
   {
       int min = arr[i];
       int ind = i;
       for(int j = i + 1; j < n; j++)
       {
           if(arr[j] < min)
           {
               min = arr[j];
               ind = j;
           }
       }
       if(ind != i)
       {
           swap(arr[ind], arr[i]);
       }
       s.push(arr[i]);
   }
   
}