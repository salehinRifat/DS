package Array;

public class BinarySearch {
    public static int binaryS(int numbers[], int key) {
        int start = 0, end = numbers.length - 1;
        while (start <= end) {
            int mid = (start + end) / 2;
            if (key == numbers[mid])
                return mid;
            else if (key > numbers[mid])
                start = mid + 1;
            else
                end = mid - 1;
        }

        return -1;
    }

    public static void main(String[] args) {
        int numbers[] = {1, 2, 4, 7, 8, 9, 11};
        int key = 2;
        System.out.println(binaryS(numbers, key));
    }
}
