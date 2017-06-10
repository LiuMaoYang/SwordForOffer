# -*- coding:utf-8 -*-
class Solution:
    def __init__(self):
        pass
    def Fibonacci(self, n):
        if n<0:
            return None
        if n==0 or n==1:
            return n
        
        f=[]
        f.append(0)
        f.append(1)
        for i in range(2,n+1):
            f.append(f[i-1]+f[i-2])
        return f[n]
    
so=Solution()
x=int(raw_input())
f=so.Fibonacci(x)
print "Item n of the Fibonacci sequence:{}".format(f)