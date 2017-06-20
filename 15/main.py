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

    def ReverseList(self, pHead):
        if pHead==None:
            return None
        
        pre=None#if write pre=ListNode(None), the output turn to ReverseList + None?
        nex=None
        while pHead:
            nex=pHead.next
            pHead.next=pre
            pre=pHead
            pHead=nex
            
        return pre

data=raw_input().split(' ')   
l=ListNode(None)
l.CreateList(l, data)
newL=l.ReverseList(l)
while newL:
    print newL.val,
    newL=newL.next

            