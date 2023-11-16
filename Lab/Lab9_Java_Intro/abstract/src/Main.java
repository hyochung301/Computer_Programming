abstract class Shape {
    abstract void calculation();
    void printShape() { System.out.println("Shape");}
}

class Rectangle extends Shape {
    @Override
    void calculation() {
        printShape();
        System.out.println("to be calculated");
    }
}


public class Main {
    public static void main(String[] args) {
        Rectangle s = new Rectangle();
        s.calculation();
    }
}