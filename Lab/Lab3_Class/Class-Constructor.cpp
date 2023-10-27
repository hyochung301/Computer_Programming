#include <iostream>

class Rectangle{
    int width, height;
    public:
        Rectangle(int x, int y) { width = x; height = y; }
        int area() {return width*height;}
};

int main(){

    Rectangle rect(3,5);
    std::cout << "area: " << rect.area() << std::endl; //15
}