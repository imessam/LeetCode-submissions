/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    HashMap<TreeNode,Boolean> dpBalanced = new HashMap<>();
    HashMap<TreeNode,Integer> dpHeight = new HashMap<>();
    
    public boolean isBalanced(TreeNode root) {
        
        if(dpBalanced.containsKey(root))
            return dpBalanced.get(root);
        
        boolean balanced = true;
        
        if(root == null)
            balanced = true;
        else if(root.left == null && root.right == null)
            balanced = true;
        else
            balanced = isBalanced(root.left) && isBalanced(root.right) && Math.abs(getHeight(root.left)-getHeight(root.right)) <= 1;
                    
        
        dpBalanced.put(root,balanced);
        
        return balanced;
        
    }
    
    public int getHeight(TreeNode root){
        
        if(dpHeight.containsKey(root))
            return dpHeight.get(root);
        
        int height = 0;
        
        if(root != null)
            height = 1+Math.max(getHeight(root.left),getHeight(root.right));
        
        dpHeight.put(root,height);
        
        return height;
        
    }
}