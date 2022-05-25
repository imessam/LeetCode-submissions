class Solution {
    public String toLowerCase(String s) {
        String low="";
        
        for(int i =0 ;i<s.length(); i++){
            if(s.charAt(i)>=65 && s.charAt(i)<=90)
                low+=(char)(s.charAt(i)+32);
            else
                low+=s.charAt(i);
        }
        return low;
    }
}