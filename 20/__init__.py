# -*- coding:utf-8 -*-
class Solution:
#     def __init__(self):
    stack = []
    def push(self, node):
        # write code here
        self.stack.append(node)
        
        
    def pop(self):
        # write code here
        self.stack.pop()
        
    def top(self):
        # write code here
        return self.stack[-1]
        
    def min(self):
        # write code here
        # 若a = b, 则a、b指向同一对象，一个改变另一个随之改变
        # 用 a = b[:]，则创立两个不同的对象
        sort = self.stack[:] 
        sort.sort()
        return sort[0]

so = Solution()
so.push(3)
print so.min()
        