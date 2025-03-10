package Array;

public class prefixSum {
    public static int printMax(int numbers[]) {
        int maxSum = Integer.MIN_VALUE;
        // Prefix sum calculation
        int prefixSum[] = new int[numbers.length];
        prefixSum[0] = numbers[0];
        for (int i = 1; i < numbers.length; i++) {
            prefixSum[i] = prefixSum[i - 1] + numbers[i];
        }
        // Calculation of Maximum Sum
        for (int i = 0; i < numbers.length; i++) {
            for (int j = i; j < numbers.length; j++) {
                int currentSum = i == 0 ? prefixSum[j] : prefixSum[j] - prefixSum[i - 1];
                if (currentSum > maxSum) {
                    maxSum = currentSum;
                }
            }
        }
        return maxSum;
    }

    public static void main(String[] args) {
        int numbers[] = { 1,-2,6,-1,3 };
        System.out.println(printMax(numbers));
    }
}
