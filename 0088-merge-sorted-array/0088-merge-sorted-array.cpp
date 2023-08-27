class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx1=0,idx2=0,temp = 0;
        vector<int> ret;
        for(int i = 0 ; i<m+n;i++){
            
            if (idx1 == m){
                ret.insert(ret.begin()+i,nums2[idx2]);
                idx2++;
            }else if(idx2 == n){
                ret.insert(ret.begin()+i,nums1[idx1]);
                idx1++;
            }else{
                if(nums1[idx1] < nums2[idx2]){
                    ret.insert(ret.begin()+i,nums1[idx1]);
                    idx1++;
                }else{
                    ret.insert(ret.begin()+i,nums2[idx2]);
                    idx2++;
                }
            }
        }
        nums1=ret;
    }
};