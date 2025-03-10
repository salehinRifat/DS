package Array;
import java.util.*;

public class productExceptSelf {

    public static int[] print(int[] nums){
        int[] result = new int[nums.length];
        int pre = 1, post = 1;
        for(int i=0; i< nums.length;i++){
            result[i] = pre ;
            pre = pre * nums[i];
        }
        for(int i=nums.length-1; i>0;i--){
            result[i] = post * result[i];
            post = post * nums[i];
        }
        return result;   
    }
    public static void main(String[] args) {
        int[] numbers = {1,2,3,4};
        print(numbers);
    }
}