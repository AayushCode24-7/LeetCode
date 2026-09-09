class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* smaller = new ListNode(0);
        ListNode* larger = new ListNode(0);

        ListNode* smaller_Ptr = smaller;
        ListNode* larger_Ptr = larger;

        ListNode* curr = head;
        while (curr != nullptr) {
            if (curr->val < x) {
                smaller_Ptr->next = curr;
                smaller_Ptr = smaller_Ptr->next;
            } else {
                larger_Ptr->next = curr;
                larger_Ptr = larger_Ptr->next;
            }
            curr = curr->next;
        }
        larger_Ptr->next = nullptr;
        smaller_Ptr->next = larger->next;

        ListNode* result = smaller->next;

        delete smaller;
        delete larger;
        
        return result;
    }
};
