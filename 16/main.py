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

    def Merge(self, pHead1, pHead2):
        if pHead1==None and pHead2==None:
            return None
        elif pHead1==None:
            return pHead2
        elif pHead2==None:
            return pHead1
        
        if pHead1.val>pHead2.val:
            pHead2.next=self.Merge(pHead1,pHead2.next)
            return pHead2
        else:
            pHead1.next=self.Merge(pHead1.next,pHead2)
            return pHead1

data1=raw_input().split(' ')   
l1=ListNode(None)
l1.CreateList(l1, data1)

data2=raw_input().split(' ')   
l2=ListNode(None)
l2.CreateList(l2, data2)

newL=ListNode(None)
newL=newL.Merge(l1, l2)
while newL:
    print newL.val,
    newL=newL.next

            