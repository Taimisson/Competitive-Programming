# Time Conversion

Given a time in -hour AM/PM format, convert it to military (24-hour) time.

Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.

[Time Conversion - HackerRank](https://www.hackerrank.com/challenges/time-conversion/problem?isFullScreen=true)

# Solution

```
string timeConversion(string s) {
    string hourString = s.substr(0, 2); // Extraindo as horas
    int hour = stoi(hourString); // Convertendo as horas para inteiro
    string am_pm = s.substr(8, 2); // Extraindo AM ou PM

    if (am_pm == "AM") {
        if (hour == 12) {
            // Convertendo 12 AM para 00
            hourString = "00";
        }
    } else { // "PM"
        if (hour != 12) {
            // Convertendo PM para formato 24 horas, exceto para 12 PM
            hour += 12;
            hourString = (hour < 10) ? "0" + to_string(hour) : to_string(hour);
        }
    }

    return hourString + s.substr(2, 6); // Montando a string final
}
```