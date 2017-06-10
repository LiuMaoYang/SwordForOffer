import numpy as np

def Find(target, array):
    for i in array:
        if target in i:
            return True
    return False

array=np.round(np.random.random((4,4))*10)
print array

if Find(input(), array):
    print "found"
else:
    print "not found"
