#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle {
public:
    int width, height;
    virtual void display() {
        cout << width << ' ' << height << endl;
    }
};

class RectangleArea : public Rectangle {
    long area;
public:
    void read_input() {
        cin >> width >> height;
        area = width * height;
    }
    void display() override {
        cout << area << endl;
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