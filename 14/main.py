# -*- coding:utf-8 -*-
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None
        
    def CreateList(self,list,data):
        temp1=list
        temp1.val=data[0]
        for i in data[1:]:
            temp2=ListNode(i)
            temp1.next=temp2
            temp1=temp1.next

    def FindKthToTail(self, head, k):
        l=[]
        while head:
            l.append(head)
            head=head.next
        
        cnt=len(l)
        if k>cnt:
            return None
        
        return l[-k]

data=raw_input().split(' ')   
l=ListNode(None)
l.CreateList(l, data[:-1])
node=l.FindKthToTail(l, int(data[-1]))
print node.val

            