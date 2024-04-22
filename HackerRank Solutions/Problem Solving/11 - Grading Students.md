# Grading Students

HackerLand University has the following grading policy:

Every student receives a  in the inclusive range from  to .
Any  less than  is a failing grade.
Sam is a professor at the university and likes to round each student's  according to these rules:

If the difference between the  and the next multiple of  is less than , round  up to the next multiple of .
If the value of  is less than , no rounding occurs as the result will still be a failing grade.

[Grading Students - HackerRank](https://www.hackerrank.com/challenges/grading/problem?isFullScreen=true)

# Solution

```
vector<int> gradingStudents(vector<int> grades)
{
    vector<int> newGrades;
    for(int n : grades){
        if ((n>37) && ((n%5) >2) ) newGrades.push_back(n+5-n%5);
        else newGrades.push_back(n);
    }
    return newGrades;
}
```