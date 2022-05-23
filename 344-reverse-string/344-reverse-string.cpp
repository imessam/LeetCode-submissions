class Solution {
public:
    void reverseString(vector<char>& s) {
        int begin = 0, end = s.size()-1,temp = 0;
        
        while(begin<end){
            temp = s[begin];
            s[begin] = s[end];
            s[end] = temp;
            begin++;
            end--;
        }
    }
};