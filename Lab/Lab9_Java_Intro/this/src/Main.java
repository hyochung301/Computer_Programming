class Shape{
    protected int offset_x, offset_y;
    public Shape(int offset_x, int offset_y) {
        this.offset_x = offset_x;
        this.offset_y = offset_y;
    }
}

public class Main {
    public static void main(String[] args) {
        Shape s = new Shape(3, 5);
        System.out.println(s.offset_y);
        System.out.println(s.offset_x);

    }
}