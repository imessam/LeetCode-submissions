class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> count;
        set<int> uniques;
        
        for(int i = 0;i<s.size();i++){
            if(count.find(s[i]) == count.end()){
                count[s[i]] = i;
                uniques.insert(i);
            }else{
                if(count[s[i]] != -1){
                    uniques.erase(count[s[i]]);
                    count[s[i]] = -1;
                }
            }
        }
        return uniques.size()>0?*uniques.begin():-1;
    }
};