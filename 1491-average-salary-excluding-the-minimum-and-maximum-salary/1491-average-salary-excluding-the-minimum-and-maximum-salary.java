class Solution {
    public double average(int[] salary) {
        int min = salary[0],max = salary[0];
        double sum = 0;
        
        for(int i = 0;i<salary.length;i++){
            if(salary[i]<min){
                min = salary[i];
            }if(salary[i]>max){
                max = salary[i];
            }
            sum+=salary[i];
        }
        
        sum -=  min + max;
        return sum / (salary.length - 2);
    }
}