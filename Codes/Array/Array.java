package Array;
public class Array {
    public static int sum(int num[]){
        int sumNum=0;
        
        for(int j =0; j< 5;j++){
            sumNum+=num[j];
          } 
        return sumNum;
    }

    public static void main(String[] args) {
      int numbers[] = new int[5];
      for(int i =0; i< 5;i++){
        numbers[i] = i+1;
      }  
      System.out.println(sum(numbers));
    }
}