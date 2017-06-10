# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None
        
    def CreateList(self,List,data):
        temp1=List
        temp1.val=data[0]
        for i in data[1:]:
            temp2=ListNode(i)
            temp1.next=temp2
            temp1=temp1.next
                
    # 返回从尾部到头部的列表值序列，例如[1,2,3]
    def printListFromTailToHead(self, linklist):
        l=[]
        while linklist:
            l.insert(0,linklist.val)
            linklist=linklist.next
        return l
    
data=raw_input().split(' ')

l=ListNode(None)
l.CreateList(l,data)
revlist=l.printListFromTailToHead(l)
for i in revlist:
    print i+" ",
