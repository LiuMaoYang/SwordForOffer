# -*- coding:utf-8 -*-
class Solution:
    def __init__(self):
        pass
    def jumpFloorII(self, number):
        if number<=0:
            return 0;
        elif number==1:
            return 1;
        else:
            return 2*self.jumpFloorII(number-1)
    
so=Solution()
x=int(raw_input())
f=so.jumpFloorII(x)
print "Total method:{}".format(f)