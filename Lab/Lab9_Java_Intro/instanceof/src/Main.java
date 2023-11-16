class Shape{}
public class Rectangle extends Shape {
    public static void main(String[] args){
        Rectangle r = new Rectangle();
        System.out.println(r instanceof Object);
        System.out.println(r instanceof Shape);
        System.out.println(r instanceof Rectangle);
        System.out.println(r.getClass().equals(Shape.class));

    }
}

public class Main {
    public static void main(String[] args) {
        System.out.println("Hello world!");
    }
}