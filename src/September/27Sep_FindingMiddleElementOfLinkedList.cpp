class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        if(!head)
            return -1;
        Node *slow = head;
        Node *fast = head;
        while(fast)
        {
            fast = fast->next;
            if(fast)
                fast = fast->next;
            else
                break;
            slow = slow->next;
        }
        return slow->data;
    }
};