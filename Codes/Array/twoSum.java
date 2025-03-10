package Array;

import java.util.HashMap;

public class twoSum {
    public static int[] printTwoSum(int numbers[], int target){
        HashMap<Integer, Integer> map = new HashMap<>();
        for(int i=0; i<numbers.length; i++){
            int diff = target - numbers[i];
            if(map.containsKey(diff)){
                return new int[]{map.get(diff), i};
            }else{
                map.put(numbers[i], i);
            }
        }
        return null;
    }
    public static void main(String[] args) {
        int numbers[] = {2,7,11,15};
        printTwoSum(numbers,9);
    }
}
