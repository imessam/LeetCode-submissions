class Solution {
public:
    set<int> unique;
    bool isHappy(int n) {
        if(n==1)
            return true;
        if(unique.find(n) != unique.end())
            return false;
        unique.insert(n);
        int sq = 0,digit = 0;
        while(n!= 0){
            digit = n%10;
            sq+=(digit*digit);
            n/=10;
        }
        return isHappy(sq);
    }
};