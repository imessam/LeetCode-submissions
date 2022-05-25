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
    ListNode* swapNodes(ListNode* head, int k) {
        unordered_map<int,ListNode*> dict;
        ListNode* curr = head;
        int length = 0;
        
        while(curr != NULL){
            dict[++length] = curr;
            curr = curr->next;
        }
        int temp = dict[k]->val;
        dict[k]->val = dict[length+1-k]->val;
        dict[length+1-k]->val = temp;
                
        return head;
    }
};