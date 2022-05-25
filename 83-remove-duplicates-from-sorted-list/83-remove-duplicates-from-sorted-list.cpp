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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if (head == NULL || head->next == NULL){
            return head;
        }
        
        set<int> list;
        set<int>::const_iterator it;
        ListNode* curr = head;
        list.insert(head->val);
        
        while(curr != NULL && curr->next != NULL){
            it = list.find(curr->next->val);
            if(it != list.end()){
                curr->next = curr->next->next;
            }else{
                list.insert(curr->next->val);
                curr = curr->next;
            }
        }
        return head;
    }
};