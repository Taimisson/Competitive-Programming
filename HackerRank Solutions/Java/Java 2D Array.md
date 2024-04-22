# Java 2D Array

https://www.hackerrank.com/challenges/java-2d-array/problem?isFullScreen=true

# Solution

```
import java.util.Scanner;

public class HourglassSum {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[][] arr = new int[6][6];

        // Reading the 6x6 array
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                arr[i][j] = scanner.nextInt();
            }
        }

        // Initialize maxSum with the minimum possible value
        int maxSum = Integer.MIN_VALUE;

        // Iterate over the array to find the hourglass sums
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                // Calculate the sum of the current hourglass
                int sum = arr[i][j] + arr[i][j+1] + arr[i][j+2]
                                + arr[i+1][j+1]
                        + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];

                // Update maxSum if the current sum is greater
                if (sum > maxSum) {
                    maxSum = sum;
                }
            }
        }

        // Print the maximum hourglass sum
        System.out.println(maxSum);
    }
}

```