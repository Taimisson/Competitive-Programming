# Java BigDecimal

https://www.hackerrank.com/challenges/java-bigdecimal/problem?isFullScreen=true

# Solution

```
import java.math.BigDecimal;
import java.util.Scanner;

class Number {
    String originalForm;
    BigDecimal value;

    public Number(String originalForm) {
        this.originalForm = originalForm;
        this.value = new BigDecimal(originalForm);
    }
}

public class Solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine(); 

        Number[] numbers = new Number[n];
        for (int i = 0; i < n; i++) {
            String numStr = scanner.nextLine();
            numbers[i] = new Number(numStr);
        }

        // Bubble Sort
        boolean swapped;
        for (int i = 0; i < n - 1; i++) {
            swapped = false;
            for (int j = 0; j < n - i - 1; j++) {
                if (numbers[j].value.compareTo(numbers[j + 1].value) < 0) {
                    // Troca os elementos
                    Number temp = numbers[j];
                    numbers[j] = numbers[j + 1];
                    numbers[j + 1] = temp;
                    swapped = true;
                }
            }
            if (!swapped) {
                break;
            }
        }

    
        for (Number num : numbers) {
            System.out.println(num.originalForm);
        }
    }
}

```