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
    ListNode* oddEvenList(ListNode* head) {
        
        
        if(head != NULL && head->next != NULL){
            ListNode* evenHead = NULL;
            ListNode* tempEven = NULL;
            ListNode* oddHead = NULL;
            ListNode* tempOdd = NULL;
            ListNode* temp = head;
            int count = 1;

            while(temp != NULL){
                if(count%2 == 0){
                    if(count == 2){
                        tempEven = temp;
                        evenHead = tempEven;
                    }else{
                        tempEven->next = temp;
                        tempEven = tempEven->next;
                    }
                }else{
                    if(count == 1){
                        tempOdd = temp;
                        oddHead = tempOdd;
                    }else{
                        tempOdd->next = temp;
                        tempOdd = tempOdd->next;
                    }
                }
                temp = temp->next;
                count++;
            }
            tempEven->next=NULL;
            tempOdd->next = evenHead;
            head = oddHead;            
        }
        
        // ListNode* temp = head;
        // while(temp!=NULL){
        //     cout<<temp->val<<",";
        //     temp = temp->next;
        // }
        
        return head;
        
    }
};