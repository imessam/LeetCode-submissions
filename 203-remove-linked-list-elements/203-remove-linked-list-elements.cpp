/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        
            
            while(head != NULL && head->val == val ){
                head = head->next;
            }
        
            if(head != NULL){  
                
                ListNode* next = head->next;
                ListNode* prev = head;


                while(prev != NULL && next != NULL){

                    if(next->val == val){
                        next = next->next;
                        prev->next = next;
                        continue;
                    }
                    prev = prev->next;
                    if(next != NULL){
                    next = next->next;
                    }
                }
        }

        
        return head;
        
    }
};