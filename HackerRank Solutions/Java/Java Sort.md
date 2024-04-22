# Java Sort

https://www.hackerrank.com/challenges/java-sort/problem?isFullScreen=true

# Solution

```
import java.util.*;

class Student {
    private int id;
    private String name;
    private double cgpa;

    public Student(int id, String name, double cgpa) {
        this.id = id;
        this.name = name;
        this.cgpa = cgpa;
    }

    public int getId() {
        return id;
    }

    public String getName() {
        return name;
    }

    public double getCgpa() {
        return cgpa;
    }
}

class StudentComparator implements Comparator<Student> {
    @Override
    public int compare(Student s1, Student s2) {
        if (s1.getCgpa() != s2.getCgpa())
            return s1.getCgpa() > s2.getCgpa() ? -1 : 1; 
        else if (!s1.getName().equals(s2.getName())) 
            return s1.getName().compareTo(s2.getName()); 
        else
            return s1.getId() - s2.getId(); 
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int totalStudents = scanner.nextInt();
        List<Student> students = new ArrayList<>();

        for (int i = 0; i < totalStudents; i++) {
            int id = scanner.nextInt();
            String name = scanner.next();
            double cgpa = scanner.nextDouble();
            students.add(new Student(id, name, cgpa));
        }

        Collections.sort(students, new StudentComparator());

        for (Student student : students) 
            System.out.println(student.getName());
    }
}

```