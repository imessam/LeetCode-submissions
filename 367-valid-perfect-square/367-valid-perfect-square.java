class Solution {
    public boolean isPerfectSquare(int num) {
        if(num==1)
            return true;
        long low,high,mid;
        
        low = 1;
        high = num;
        mid = (low+high)/2;
        
        while(low<=high && (mid*mid) != num){
            if((mid*mid) > num)
                high = mid-1;
            else
                low = mid+1;
            mid = (low+high)/2;
        }
        return low<=high;
    }
}