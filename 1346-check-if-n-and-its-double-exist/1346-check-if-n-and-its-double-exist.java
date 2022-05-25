class Solution {
    public boolean checkIfExist(int[] arr) {
        Arrays.sort(arr);
        
        int doub = 0,elem = 0;
        
        for(int i = 0 ;i< arr.length;i++){
            elem = arr[i];
            doub = 2*elem;
            if (search(arr,doub,i))
                return true;
        }
        return false;
    }
    
    boolean search(int [] arr, int elem,int idx){
        
        int low,high,mid;
        
        low = 0;
        high = arr.length-1;
        mid = (low+high)/2;
        
        while(low<=high){
            if(arr[mid] == elem && mid != idx)
                return true;
            else if(arr[mid]>elem)
                high = mid-1;
            else
                low = mid+1;
            mid = (low+high)/2;
        }
        return false;  
    }
}