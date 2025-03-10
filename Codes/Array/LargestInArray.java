package Array;

public class LargestInArray {
    public static int largestNum(int numbers[]){
        int max = Integer.MIN_VALUE;
        for(int i=0; i<numbers.length; i++){
            if(numbers[i]>max){
                max = numbers[i];
            }
        }
        return max;
    }
    public static void main(String[] args) {
        int numbers[] = {1,4,8,2,11,7,9};
        System.out.println(largestNum(numbers));
    }
}
