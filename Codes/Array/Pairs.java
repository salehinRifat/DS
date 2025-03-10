package Array;

public class Pairs {
    public static void printPairs(int numbers[]){
        for(int i=0; i< numbers.length; i++){
            for(int j=i+1; j<numbers.length;j++){
                System.out.print("( " +numbers[i]+","+numbers[j]+") ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        int numbers[] = {3,4,7,1,2};
        printPairs(numbers);
    }
}
