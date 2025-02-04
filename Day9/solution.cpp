#include <iostream>

using namespace std;

class Rectangle {
public: int width, height;
public:
    // Display method to print width and height
    void display() {
        cout << width << " " << height << endl;}
};

class RectangleArea : public Rectangle {
public:
    void read_input() {
        cin >> width >> height;
    }
    // Overloaded display method to print the area of the rectangle
    void display() {
        cout << width * height << endl;
    }
};


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}