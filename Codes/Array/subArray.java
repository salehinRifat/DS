package Array;

public class subArray {
    public static void printSubArr(int numbers[]){
        for(int i=0; i< numbers.length; i++){
            for(int j=i; j<numbers.length;j++){
                System.out.print(" (");
                for(int k=i; k<=j;k++){
                    System.out.print(numbers[k]+" ");
                }
                System.out.print(") ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        int numbers[] = {2,3,5,7,6};
        printSubArr(numbers);
    }
}
