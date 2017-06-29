# -*- coding:utf-8 -*-
# -*- coding:utf-8 -*-
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None
        
    def reConstructBinaryTree(self, pre, tin):
        if len(pre)==0:
            return None
        
        head = TreeNode(pre[0])
        for idx, val in enumerate(tin):
            if val == pre[0]:
                break
            
        left_tin = tin[:idx]
        right_tin = tin[idx +1 :]
        left_pre = pre[1:idx +1]
        right_pre = pre[idx +1:]
        
        head.left = self.reConstructBinaryTree(left_pre, left_tin)
        head.right = self.reConstructBinaryTree(right_pre, right_tin)
        
        return head
    
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
    
    def preOrder(self, tree):
        if(tree):
            print tree.val,
            self.preOrder(tree.left)
            self.preOrder(tree.right)
            
    def inOrder(self, tree):
        if(tree):
            self.inOrder(tree.left)
            print tree.val,
            self.inOrder(tree.right)
    
    def postOrder(self, tree):
        if(tree):
            self.postOrder(tree.left)
            self.postOrder(tree.right)
            print tree.val,
        
# class Solution(TreeNode):
#     # 返回构造的TreeNode根节点

# data = raw_input().split(' ')
t = TreeNode(None)
# tree = t.createTree()
pre = [1,2,4,7,3,5,6,8]
tin = [4,7,2,1,5,3,8,6]
tree = t.reConstructBinaryTree(pre, tin)

print '前序遍历：'
t.preOrder(tree)
print '\n'
print '中序遍历：'
t.inOrder(tree)
print '\n'
print '后序遍历：'
t.postOrder(tree)

            