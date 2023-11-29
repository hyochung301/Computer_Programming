class Shape {
    protected static int offset_x = 2;
    protected int offset_y;
    public Shape() {
        this.offset_y = 0;
    }
}

public class Main {
    public static void main(String[] args) {
        Shape s = new Shape();
        System.out.println(s.offset_y);
        System.out.println(Shape.offset_x);
    }
}