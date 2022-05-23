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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        unordered_map<int,ListNode*> nodes;
        
        while(head != NULL){
            nodes[++count-1] = head;
            head=head->next;
        }
        
        if((count-n-1) <0 ){
            return nodes[0]->next;
        }
        nodes[count-n-1]->next = nodes[count-n]->next;

        return nodes[0];
    }
};