// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    
    int binarySearch(int begin,int end){
        
        if(begin == end){
            return begin;
        }
        
        int middle = (begin/2 + end/2);
        
        if(isBadVersion(middle) && !isBadVersion(middle-1)){
            return middle;
        }else if (!isBadVersion(middle)){
            return binarySearch(middle+1,end);
        }else{
            return binarySearch(begin,middle-1);
        }
    }
    int firstBadVersion(int n) {
        if(n == 2){
            return isBadVersion(n-1)?n-1:n;
        }
        return binarySearch(1,n);
    }
};