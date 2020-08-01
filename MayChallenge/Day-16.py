# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def oddEvenList(self, head: ListNode) -> ListNode:
        if head==None or head.next==None:
            return head
        oddP, evenP, even = head, head.next, head.next
        while evenP != None and evenP.next != None:
            oddP.next = oddP.next.next                 #delete next node and move 2 step forward
            oddP = oddP.next                           #odd list
            evenP.next = evenP.next.next
            evenP = evenP.next                          #even list
        
        oddP.next = even                               #merge even and odd list 
        
        return head
