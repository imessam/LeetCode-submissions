# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        
        
        resList = ListNode()
        curr = resList
        
        while(list1 != None and list2 != None):
            if list1.val < list2.val:
                curr.next = ListNode(val = list1.val)
                list1 = list1.next
            else:
                curr.next = ListNode(val = list2.val)
                list2 = list2.next
            curr = curr.next
            
        while(list1 != None):
            curr.next = ListNode(val = list1.val)
            list1 = list1.next
            curr = curr.next
        while(list2 != None):
            curr.next = ListNode(val = list2.val)
            list2 = list2.next
            curr = curr.next
            
        return resList.next