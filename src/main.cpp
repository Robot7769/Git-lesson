#include <iostream>
#include <cmath>


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

class Circle : public Rectangle {
   private:
    double radius;

   public:
    Circle(double r) : Rectangle(2 * r, 2 * r) { radius = r; }

    double getArea() { return M_PI * pow(radius, 2); }
};

int main() {
    Rectangle rectangle(5, 3);
    std::cout << "Plocha obdélníku: " << rectangle.getArea() << std::endl;
    Circle circle(4);
    std::cout << "Plocha kruhu: " << circle.getArea() << std::endl;

    return 0;
}
