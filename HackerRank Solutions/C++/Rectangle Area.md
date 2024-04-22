# Rectangle Area

# Solution

```
#include <iostream>
using namespace std;

// Define the Rectangle class
class Rectangle {
    public:
        int width, height;
        
        // Method to display width and height
        void display() {
            cout << width << " " << height << endl;
        }
};

// Define the RectangleArea class that inherits from Rectangle
class RectangleArea : public Rectangle {
    public:
        // Method to read input values into width and height
        void read_input() {
            cin >> width >> height;
        }
        
        void display() {
            // Call the base class display method to print width and height
            Rectangle::display();
            // Print the area of the rectangle
            cout << width * height << endl;
        }
};

int main() {
    // Create an instance of RectangleArea
    RectangleArea rectArea;
    
    // Read the input values
    rectArea.read_input();
    
    // Display the width and height
    // Display the area of the rectangle
    rectArea.display();
    
    return 0;
}

```