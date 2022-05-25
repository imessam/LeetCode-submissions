# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        
        path_p = self.search(root,p)
        path_q = self.search(root,q)
        
        lca = root
        
        for k,v in path_p.items():
            if k in path_q:
                lca = v
        return lca
    
    def search(self,root,target):
        
        path = {root.val:root}
        
        if(root.val == target.val):
            return path
        
        if target.val > root.val:
            path.update(self.search(root.right,target))
        else:
            path.update(self.search(root.left,target))
        return path
        
        
        
        
        