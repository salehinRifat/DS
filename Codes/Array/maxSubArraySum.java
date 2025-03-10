package Array;

public class maxSubArraySum {
    public static int printSubArrSum(int numbers[]){
        int maxSum = Integer.MIN_VALUE;
       
        for(int i=0; i< numbers.length; i++){
            
            for(int j=i; j<numbers.length;j++){
                int currentSum=0;
                for(int k=i; k<=j;k++){
                    currentSum+=numbers[k];
                }
                if(currentSum>maxSum){
                    maxSum = currentSum;
                }
                
            }
           
        }
        return maxSum;
    }
    public static void main(String[] args) {
        int numbers[] = {2, 4,6,8,10};
        int ans = printSubArrSum(numbers);
        System.out.println(ans);
    }
}
