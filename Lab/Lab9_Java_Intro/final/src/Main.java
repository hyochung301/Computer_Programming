class Shape {
    protected final static int offset_x = 2;
    protected int offset_y;
    public Shape(int offset_x, int offset_y){
        Shape.offset_x = offset_x;
        this.offset_x = 3;

    }
}

class Rectangle extends Shape{
    public Rectangle () {
        super(10, 20);
        System.out.println(super.offset_y);
    }
}

public class Main {
    public static void main(String[] args) {
        System.out.println("Hello world!");
    }
}