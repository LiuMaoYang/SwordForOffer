# -*- coding:utf-8 -*-
class Solution:
    # matrix类型为二维列表，需要返回列表
    def printMatrix(self, matrix):
        row = len(matrix)
        col = len(matrix[0])
        matR=[]
        while len(matrix) > 0:
            matR.extend(matrix[0])
            if len(matrix)>1:
                matrix = Solution.turn(self, matrix[1:])
            else:
                matrix.pop()
        return matR
    
    def turn(self, mat):
        if mat == None:
            return None
        row = len(mat)
        col = len(mat[0])
        matT=[]
        colIdx = range(col)
        colIdx.reverse()
        for c in colIdx:
            sub = []
            for r in range(row):
                sub.append(mat[r][c])
            matT.append(sub)
        return matT

so = Solution()
x=[[1],[2],[3]]
print x
print so.printMatrix(x)    
        