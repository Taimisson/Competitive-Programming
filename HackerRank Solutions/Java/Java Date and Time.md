# Java Date and Time

https://www.hackerrank.com/challenges/java-date-and-time/problem?isFullScreen=true

# Solution

```
class Result {

    public static String findDay(int month, int day, int year) {
        LocalDate date = LocalDate.of(year, month, day);
        return date.getDayOfWeek().getDisplayName(TextStyle.FULL, Locale.ENGLISH).toUpperCase();
    }
}
```