class Shape {
    protected int offset_x, offset_y;
    @Override
    public String toString() {
        System.out.println(super.toString());
        return "Shape{" +
                "offset_x=" + offset_x +
                ", offset_y=" + offset_y +
                "}";
    }
}
class Rectangle extends Shape{
    protected int width = 10, height = 20;
    @Override
    public String toString() {
        System.out.println(super.toString());
        return "Rectangle size: (" + width + "," + height + ")";
    }
}
public class Main {
    public static void main(String[] args){
        Rectangle s= new Rectangle();
        System.out.println(s);
    }
}