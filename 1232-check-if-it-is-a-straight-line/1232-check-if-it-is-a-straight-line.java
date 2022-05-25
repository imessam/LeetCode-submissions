class Solution {
    public boolean checkStraightLine(int[][] coordinates) {
        double num=0,den=0,derv=0,temp;
        
        boolean isHoriz = false,isVert = false;
        num = coordinates[1][1]-coordinates[0][1];
        den = coordinates[1][0]-coordinates[0][0];
        
        derv = num/den;
        
        if(num == 0)
            isHoriz = true;
        if(den == 0)
            isVert = true;
        
        for(int i = 2;i<coordinates.length;i++){
            
            num = coordinates[i][1]-coordinates[i-1][1];
            den = coordinates[i][0]-coordinates[i-1][0];
            temp = num/den;
            
            if(isHoriz && num != 0)
                return false;
            else if(isVert && den != 0)
                return false;
            else if(!isHoriz && !isVert && temp != derv)
                return false;
        }
        
        
        return true;
    }
}