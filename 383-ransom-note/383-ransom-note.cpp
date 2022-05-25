class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> ransomCount;
        unordered_map<char,int> magazineCount;
        
        for(int i = 0;i<magazine.size();i++){
            if(magazineCount.find(magazine[i]) == magazineCount.end()){
                magazineCount[magazine[i]] = 1;
            }else{
                magazineCount[magazine[i]]++;
            }
        }
        for(int i = 0;i<ransomNote.size();i++){
            if(magazineCount.find(ransomNote[i]) == magazineCount.end()){
                return false;
            }else{
                if(ransomCount.find(ransomNote[i]) == ransomCount.end()){
                    ransomCount[ransomNote[i]] = 1;
                }else{
                    ransomCount[ransomNote[i]]++;
                }
            }
            if(ransomCount[ransomNote[i]]>magazineCount[ransomNote[i]]){
                return false;
            }
        }
        return true;
    }
};