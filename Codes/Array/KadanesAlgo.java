package Array;

public class KadanesAlgo {
    public static int printMax(int numbers[]){
        int maxSum = Integer.MIN_VALUE;
        int currentSum = 0;
        for(int i=0; i< numbers.length; i++){
            currentSum = currentSum + numbers[i];
            currentSum = Math.max(currentSum, numbers[i]);
            maxSum = Math.max(currentSum, maxSum);
        }


        return maxSum;
    }
    public static void main(String[] args) {
        int numbers[] = { -2,1,-3,4,-1,2,1,-5,4 };
        System.out.println(printMax(numbers));
    }
}
