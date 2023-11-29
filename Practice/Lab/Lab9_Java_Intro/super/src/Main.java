class Shape {
    protected int offset_x, offset_y;
    public Shape(int i, int j) {
        this.offset_x = i;
        this.offset_y = j;
    }
}

class Rectangle extends Shape{
    public Rectangle(){
        super(10,20);
        System.out.println(super.offset_y);
    }
}

public class Main {
    public static void main(String[] args) {

        Shape s = new Rectangle();
    }
}