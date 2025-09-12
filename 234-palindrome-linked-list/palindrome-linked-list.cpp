class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true; // handle 0 or 1 node

        int count = 0;
        ListNode *temp = head;

        // count total nodes
        while (temp) {
            count++;
            temp = temp->next;
        }

        int half = count / 2;

        ListNode *curr = head;
        ListNode *prev = NULL;

        // move curr to middle
        while (half--) {
            prev = curr;
            curr = curr->next;
        }

        // if odd length, skip middle node
        if (count % 2 != 0) {
            curr = curr->next;
        }

        // cut first half safely
        if (prev) prev->next = NULL;

        // reverse second half
        ListNode *front = NULL;
        prev = NULL;
        while (curr) {
            front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }

        // compare halves
        ListNode *head1 = head;
        ListNode *head2 = prev;

        while (head1 && head2) {
            if (head1->val != head2->val) {
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }

        return true;
    }
};
