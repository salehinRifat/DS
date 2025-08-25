
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* first  = head;
        ListNode* second = head;
        while(first != NULL && first->next != NULL){
            first = first->next->next;
            second = second->next;
        }
        return second;
    }
};