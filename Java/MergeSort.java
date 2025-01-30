import java.util.ArrayList;
import java.util.InputMismatchException;
import java.util.Scanner;

public class MergeSort {
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
            mergeSort(arr, 0, size - 1);
            System.out.println("\nSORTED LIST: ");
            for (int num : arr)
                System.out.print(num + "\t");
        } catch (InputMismatchException e) {
            System.out.println("INPUT MUST BE IN NUMBERS");
        }
        scanner.close();
    }

    public static void merger(ArrayList<Integer> arr, int low, int mid, int high) {
        ArrayList<Integer> temp = new ArrayList<>();
        int i = low, j = mid + 1, k = 0;

        while (i <= mid && j <= high) {
            if (arr.get(i) <= arr.get(j)) {
                temp.add(arr.get(i));
                i++;
            } else {
                temp.add(arr.get(j));
                j++;
            }
            k++;
        }
        while (i <= mid) {
            temp.add(arr.get(i));
            i++;
            k++;
        }
        while (j <= high) {
            temp.add(arr.get(j));
            j++;
            k++;
        }
        for (i = low, k = 0; i <= high; i++, k++) {
            arr.set(i, temp.get(k));
        }
    }

    public static void mergeSort(ArrayList<Integer> arr, int low, int high) {
        if (low < high) {
            int mid = low + (high - low) / 2;
            mergeSort(arr, low, mid);
            mergeSort(arr, mid + 1, high);
            merger(arr, low, mid, high);
        }
    }
}
