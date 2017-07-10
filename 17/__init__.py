# -*- coding:utf-8 -*-
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None
    
    def createTree(self):
        global data
        x = data[0]
        del data[0]
        if x == '#':
            node = None
        else:
            node = TreeNode(x)
            node.left = self.createTree()
            node.right = self.createTree() 
        return node     
    
    def isSubTree(self, pRoot1, pRoot2):
        if pRoot2 == None:
            return True
        if pRoot1 == None:
            return False
        if pRoot1.val == pRoot2.val:
            return self.isSubTree(pRoot1.left, pRoot2.left) and self.isSubTree(pRoot1.right, pRoot2.right)
    
    def HasSubtree(self, pRoot1, pRoot2):
        if pRoot1 == None or pRoot2 == None:
            return False
        return self.isSubTree(pRoot1, pRoot2) or self.HasSubtree(pRoot1.left, pRoot2) or self.HasSubtree(pRoot1.right, pRoot2) 

data0 = raw_input().split('/ ')
data = data0[0].split(' ')
t1 = TreeNode(None)
tree1 = t1.createTree()
del data
data = data0[1].split(' ')
t2 = TreeNode(None)
tree2 = t2.createTree()

t = TreeNode(None)
if(t.HasSubtree(tree1, tree2)):
    print "T2 is a subtree of T1"
else:
    print "T2 is NOT a subtree of T1"

