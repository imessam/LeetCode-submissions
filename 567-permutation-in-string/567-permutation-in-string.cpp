class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l1 = s1.size();
        int l2 = s2.size();
        
        if (l1>l2){
            return false;
        }
        
        int *f1 = new int[26];
        
        for(int i = 0;i<l1;i++){
            f1[s1[i]-'a']++;
        }
        
        for(int i = 0;i<=l2-l1;i++){
           int *f2 = new int[26];
            for(int j = 0;j<l1;j++){
                f2[s2[i+j]-'a']++;
            }
            if(isFound(f1,f2))
                return true;
        }      
        return false;
    }
    bool isFound(int f1[],int f2[]){
        for(int i = 0; i<26 ; i++){
            if(f2[i] != f1[i])
                return false;
        }
        return true;
    }
};