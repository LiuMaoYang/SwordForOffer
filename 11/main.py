# -*- coding:utf-8 -*-
class Solution:
    def NumberOf1(self, n):
        cnt=0
        while(n!=0):
            n=n&(n-1)
            cnt=cnt+1
            
#         for i in range(32):
#             cnt +=  (n >> i)&1
        return cnt
    
so=Solution()
n=int(raw_input())
print 'the number is: {}'.format(so.NumberOf1(n))