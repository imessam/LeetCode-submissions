class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low,high,mid,max;
        
        low = 0;
        high = arr.size()-1;
        mid = (low+high)/2;
        max = arr[mid];
        
        while(((mid-1) >=0 && max<arr[mid-1]) || ((mid+1) < arr.size() && max < arr[mid+1])){
            if(((mid-1) >=0 && max<arr[mid-1]))
                high = mid-1;
            else
                low = mid+1;
            mid = (low+high)/2;
            max = arr[mid];
        }
        return mid;
    }
};