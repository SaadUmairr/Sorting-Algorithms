import java.util.ArrayList;
import java.util.Collections;
import java.util.InputMismatchException;
import java.util.Scanner;

public class QuickSort {
    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter size of the list: ");
        try {
            int size = scanner.nextInt();

            if (size <= 0) {
                System.out.println("Size of list can not be negative or zero");
                scanner.close();
                return;
            }
            System.out.println("Enter the elements: ");
            for (int i = 0; i < size; i++) {
                int el = scanner.nextInt();
                arr.add(el);
            }
            System.out.println("INPUT LIST: ");
            for (int num : arr)
                System.out.print(num + "\t");
            quickSort(arr, 0, size - 1);
            System.out.println("\nSORTED LIST: ");
            for (int num : arr)
                System.out.print(num + "\t");
        } catch (InputMismatchException e) {
            System.out.println("INPUT MUST BE IN NUMBERS");
        }
        scanner.close();
    }

    public static void quickSort(ArrayList<Integer> arr, int low, int high) {
        if (low < high) {
            int pivot = partitioner(arr, low, high);
            quickSort(arr, low, pivot - 1);
            quickSort(arr, pivot + 1, high);
        }
    }

    public static int partitioner(ArrayList<Integer> arr, int low, int high) {
        int pivot = arr.get(low), i = low, j = high;

        while (i < j) {
            while (arr.get(i) <= pivot && i <= high - 1) {
                i++;
            }
            while (arr.get(j) > pivot && j >= low + 1) {
                j--;
            }
            if (i < j)
                Collections.swap(arr, i, j);
        }
        Collections.swap(arr, low, j);
        return j;
    }
}