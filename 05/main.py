# -*- coding:utf-8 -*-
class Solution:
    def __init__(self):
        self.stack1=[]
        self.stack2=[]
    
    def push(self,node):
        self.stack1.append(node)
        
    def pop(self):
        if self.stack2==[]:
            while self.stack1:
                self.stack2.append(self.stack1.pop())
        return self.stack2.pop()
    
so=Solution()#()
for i in [1,2,3]:
    so.push(i)
print so.pop()
so.push(4)
print so.pop()
print so.pop()
so.push(5)
print so.pop()
print so.pop()

