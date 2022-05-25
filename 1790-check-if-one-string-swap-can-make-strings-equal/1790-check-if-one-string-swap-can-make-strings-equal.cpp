class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        unordered_map<char,vector<int>> dict;
        
        for(int i = 0;i<s1.length();i++){
            if(dict.find(s1[i]) == dict.end())
                dict[s1[i]] = {};
            dict[s1[i]].push_back(i);
        }
        string test;
        for(int i = 0;i<s2.length();i++){
            if(dict.find(s2[i]) == dict.end())
                return false;
            vector<int> v = dict[s2[i]];
            for(int j = 0;j<v.size();j++){
                test = s2;
                test[i] = s2[v[j]];
                test[v[j]] = s2[i];
                if(test == s1)
                    return true;
            }
        }
        return false;
    }
};