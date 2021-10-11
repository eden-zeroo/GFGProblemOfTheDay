class Solution{
    public:
    bool checktree(int preorder[], int inorder[], int postorder[], int N) 
    { 
    	// Your code goes here
    	if (N == 0)
            return 1;

        if (N == 1)
            return (preorder[0] == inorder[0]) && (inorder[0] == postorder[0]);
    
        int idx = -1, f = 0;
        for (int i = 0; i < N; ++i)
        {
            if (inorder[i] == preorder[0]) {
               idx = i;
               break;
            }
        }
        
        if(idx != -1)
        {
            for(int i = 0; i < N; i++)
            {
                if(preorder[0] == postorder[i])
                {
                    f = 1;
                    break;
                    
                }
            }
        }
    
       if (idx == -1 || f == 0)
           return 0;
    
        // check for the left subtree
        int ret1 = checktree(preorder + 1, inorder, postorder, idx);
    
        // check for the right subtree
        int ret2 = checktree(preorder + idx + 1, inorder + idx + 1, postorder + idx, N - idx - 1);
    
        // return 1 only if both of them are
        // correct else 0
        return (ret1 && ret2);
    } 

};