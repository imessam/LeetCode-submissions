class Solution {
    public int mySqrt(int x) {
        long low,high,mid;
        
        low = 1;
        high = x;
        mid = (low+high)/2;
        
        while(low<=high && (mid*mid) != x){
            if((mid*mid)>x)
                high = mid-1;
            else if((mid*mid)<x)
                low = mid+1;
            mid = (high+low)/2;
        }
        return (int)mid;
    }
}