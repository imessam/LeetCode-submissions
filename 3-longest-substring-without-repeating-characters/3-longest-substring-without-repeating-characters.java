class Solution {
    public int lengthOfLongestSubstring(String s) {
       HashMap<Character,Integer> counts=new HashMap<>();
        HashMap<Integer,String> subs=new HashMap<>();
        String sub = "";
        int max = 1;
        
        for(int i = 0;i<s.length();i++){
            if(counts.containsKey(s.charAt(i))){
                subs.put(sub.length(),sub);
                i = counts.get(s.charAt(i));
                counts.clear();
                sub = "";
            }else{
                counts.put(s.charAt(i),i);
                sub+=s.charAt(i);
            }
            if(max<sub.length()){
                    max = sub.length();
            }
        }
        return s.length()<max?s.length():max;
    }
}