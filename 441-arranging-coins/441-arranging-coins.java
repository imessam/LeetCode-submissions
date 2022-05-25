class Solution {
    public int arrangeCoins(int n) {
        int coins = n,row= 0;
        while(coins >= 0){
            row++;
            coins-=row;
        }
        return row-1;
    }
}