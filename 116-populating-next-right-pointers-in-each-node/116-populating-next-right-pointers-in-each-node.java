/*
// Definition for a Node.
class Node {
    public int val;
    public Node left;
    public Node right;
    public Node next;

    public Node() {}
    
    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, Node _left, Node _right, Node _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};
*/

class Solution {
    public Node connect(Node root) {
        if(root==null){
            return root;
        }
        
        Queue<Node> bfs =  new LinkedList<>();
        int levelSize = 0;
        Node temp = null;
        bfs.add(root);
        
        while(bfs.size() != 0){
            levelSize = bfs.size();
            temp = null;
            for(int i = 0; i <levelSize;i++){
                if(bfs.peek().left != null){
                    bfs.peek().left.next = bfs.peek().right;
                    bfs.add(bfs.peek().left);
                    bfs.add(bfs.peek().right);
                    if(temp != null){
                        temp.right.next = bfs.peek().left;
                    }
                }
                temp = bfs.poll();
            }
        }
        
        return root;
    }
}