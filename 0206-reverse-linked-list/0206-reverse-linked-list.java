/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseList(ListNode head) {
        
        if(head != null){
            ListNode moving = head;
            ListNode tempHead = null;
            ListNode headNext = null;
            
            while(moving.next != null){  
                tempHead = moving.next;
                headNext = head;
                
                moving.next = tempHead.next;
                head = tempHead;
                head.next = headNext;
                
            }
        }
        
        return head;
    }
}