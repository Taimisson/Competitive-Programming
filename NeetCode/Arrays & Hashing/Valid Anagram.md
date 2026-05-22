# Valid Anagram
Easy

Given two strings s and t, return true if the two strings are anagrams of each other, otherwise return false.

An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.

https://neetcode.io/problems/is-anagram

Time Complexity: O(s + t)

Space Complexity: O(s + t)

# Solution
```
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char, int> s_count;
        unordered_map<char, int> t_count;

        for(int i = 0; i < s.size(); ++i){
            s_count[s[i]]++;
            t_count[t[i]]++;
        }

        for(int i = 0; i < s_count.size(); ++i){
            if(s_count[i] != t_count[i]) return false;
        }

        return true;

    }
};
```

Time Complexity: O(n Log n)

```
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};
```