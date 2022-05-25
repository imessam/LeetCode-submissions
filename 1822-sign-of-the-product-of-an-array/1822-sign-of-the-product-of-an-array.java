class Solution {
    public int arraySign(int[] nums) {
        int neg_count = 0,pos_count = 0;
        for(int n:nums){
            if (n>0)
                pos_count++;
            else if(n<0)
                neg_count++;
            else
                return 0;
        }
            
        return neg_count%2 == 0?1:-1;
    }
}