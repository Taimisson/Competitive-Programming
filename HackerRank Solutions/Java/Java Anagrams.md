# Java Anagrams

https://www.hackerrank.com/challenges/java-anagrams/problem?isFullScreen=true

# Solution

Using HashMap
```
import java.util.HashMap;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        
        String a = scan.nextLine();
        String b = scan.nextLine();

        System.out.println(isAnagram(a, b) ? "Anagrams" : "Not Anagrams");
    }

    static boolean isAnagram(String a, String b) {
        if (a == null || b == null || a.length() != b.length()) {
            return false;
        }

        a = a.toLowerCase();
        b = b.toLowerCase();

        HashMap<Character, Integer> map = new HashMap<>();

        // Count frequency of each character in the first string
        for (int i = 0; i < a.length(); i++) {
            char ch = a.charAt(i);
            map.put(ch, map.getOrDefault(ch, 0) + 1);
        }

        // Decrease the frequency based on the second string
        for (int i = 0; i < b.length(); i++) {
            char ch = b.charAt(i);
            if (!map.containsKey(ch)) {
                return false;
            }
            map.put(ch, map.get(ch) - 1);
            if (map.get(ch) == 0) {
                map.remove(ch);
            }
        }

        // If the map is empty, the strings are anagrams
        return map.isEmpty();
    }
}

```

# Solution 2

```
import java.util.HashMap;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        
        String a = scan.nextLine();
        String b = scan.nextLine();

        System.out.println(isAnagram(a, b) ? "Anagrams" : "Not Anagrams");
    }

    static boolean isAnagram(String a, String b) {

            int n1=a.length();
            int n2=b.length();

            a=a.toLowerCase(); 
            b=b.toLowerCase();
        
            char str1[]=a.toCharArray();
            char str2[]=b.toCharArray();
            
            java.util.Arrays.sort(str1);
            java.util.Arrays.sort(str2);
            
            if(n1 != n2) return false;
            
            for(int i=0;i<n1;i++)
                if(str1[i]!=str2[i]) return false;
                
            return true;

    }
}

```