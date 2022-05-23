/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        if(head != NULL){
            ListNode *ptr1 = head;
            ListNode *ptr2 = head;
            
            while(ptr2->next != NULL && ptr2 -> next->next != NULL){
                ptr2 = ptr2->next;
                ptr2 = ptr2->next;
                if(ptr2 == ptr1){
                    return true;
                }
                ptr1 = ptr1->next;
            }
        }
        
        
        return false;
    }
};