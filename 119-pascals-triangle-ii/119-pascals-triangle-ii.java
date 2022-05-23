class Solution {
    public List<Integer> getRow(int rowIndex) {
        if(rowIndex<=1)
            return rowIndex == 1?Arrays.asList(1,1):Arrays.asList(1);
        
        List<Integer> row = Arrays.asList(1,1),temp;

        int rowIdx = 2;
        
        for(int i = rowIdx;i<=rowIndex;i++){
            temp = row;
            row = new ArrayList<>();
            for(int j = 0;j<=i;j++){
                if(j == 0 || j == i)
                    row.add(1);
                else
                    row.add(temp.get(j)+temp.get(j-1));
            }
        }
        
        return row;
    }
}