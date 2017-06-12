# -*- coding:utf-8 -*-
class Solution:
    def __init__(self):
        pass
    def Power(self, base, exponent):
        e=abs(exponent)
        y=1.0
        while(e>0):
            y=y*base
            e=e-1
        if(exponent<0):
            y=1/y
        return y
    
so=Solution()
base=float(raw_input())
exp=int(raw_input())
print '{0}^{1}={2}'.format(base,exp,so.Power(base, exp))