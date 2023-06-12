#include <iostream>

using namespace std;

class Rectangle {
private:
    int width;
    int height;
    int name; 
    int color;

public:
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    int getArea() {
        return width * height;
    }
};

int main() {
    Rectangle rectangle(5, 3);
    cout << "Plocha obdélníku: " << rectangle.getArea() << endl;

    return 0;
}
