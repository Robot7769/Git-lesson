#include <iostream>


class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    int getArea() {
        return width * height;
    }
};

class Square : public Rectangle {
public:
    Square(int sideLength) : Rectangle(sideLength, sideLength) {}
};

int main() {
    Rectangle rectangle(5, 3);
    std::cout << "Plocha obdélníku: " << rectangle.getArea() << std::endl;

    Square square(4);
    std::cout << "Plocha čtverce: " << square.getArea() << std::endl;

    return 0;
}
