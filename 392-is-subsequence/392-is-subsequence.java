class Solution {
    public boolean isSubsequence(String s, String t) {

        if(s.length() == 0)
            return true;

        int pt = 0;

        for(int i = 0; i<t.length() && pt < s.length(); i++){
            if(t.charAt(i) == s.charAt(pt)){
                pt++;
            }
        }

        return pt == s.length();
    }
}