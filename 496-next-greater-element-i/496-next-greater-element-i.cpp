class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> dict;
        int idx = 0;
        vector<int> ans;
        
        for(int i = 0;i<nums2.size();i++){
            idx = i+1;
            while(idx < nums2.size() && nums2[idx]<nums2[i])
                idx++;
            if(idx == nums2.size())
                dict[nums2[i]] = -1;
            else
                dict[nums2[i]] = nums2[idx];
        }
        
        for(int i = 0; i<nums1.size();i++)
            ans.push_back(dict[nums1[i]]);
        return ans;
    }
};