class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        if(!head)
            return;
        Node *slow = head, *fast = head, *prev;
        do{
            //cout << slow->data << " " << fast->data << "\n";
            prev = slow;
            slow = slow->next;
            fast = fast->next;
            if(fast)
                fast = fast->next;
        }while(fast && slow != fast);
        
        if(!fast)
            return;
        fast = head;
        while(fast != slow)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next;
        }
        prev->next = NULL;
    }
};