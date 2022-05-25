class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        
        unordered_map<char,int> s_count;
        unordered_map<char,int> t_count;
        
        for(int i = 0; i<s.size();i++){
            if(s_count.find(s[i]) == s_count.end()){
                s_count[s[i]] = 1;
            }else{
                s_count[s[i]]++;
            }
        }
        for(int i = 0;i<t.size();i++){
            if(s_count.find(t[i]) == s_count.end()){
                return false;
            }else{
                if(t_count.find(t[i]) == t_count.end()){
                    t_count[t[i]] = 1;
                }else{
                    t_count[t[i]]++;
                }
            }
            if(t_count[t[i]] > s_count[t[i]]){
                return false;
            }
        }
        return true;
    }
};