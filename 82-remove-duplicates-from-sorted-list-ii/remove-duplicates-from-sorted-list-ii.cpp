class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* curr = head;

        while(curr != NULL)
        {
            // Duplicate found
            if(curr->next != NULL &&
               curr->val == curr->next->val)
            {
                int duplicate = curr->val;

                // Skip all duplicate nodes
                while(curr != NULL &&
                      curr->val == duplicate)
                {
                    curr = curr->next;
                }

                prev->next = curr;
            }
            else
            {
                prev = prev->next;
                curr = curr->next;
            }
        }

        return dummy->next;
    }
};