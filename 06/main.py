# -*- coding:utf-8 -*-
class Solution:
    def __init__(self):
        pass
    
    def minNumberInRotateArray(self, rotateArray):
        if len(rotateArray)==0:
            return 0
        for i in range(1,len(rotateArray)):
            if rotateArray[i]<rotateArray[i-1]:
                return rotateArray[i]
        return rotateArray[0]
            
    
so=Solution()#()
array=[]
x=int(raw_input())
while x>0:
    array.append(x)
    x=int(raw_input())
y=so.minNumberInRotateArray(array)
print "The number is:",y

