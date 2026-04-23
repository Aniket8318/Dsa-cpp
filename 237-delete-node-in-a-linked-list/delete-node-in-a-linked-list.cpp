class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;        // copy next node value
        ListNode* temp = node->next;        // store next node
        node->next = node->next->next;      // skip next node
        delete temp;                        // delete it
    }
};