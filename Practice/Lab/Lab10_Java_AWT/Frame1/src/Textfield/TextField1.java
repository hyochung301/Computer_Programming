package Textfield;
import java.awt.*;

public class TextField1 {
    public static void main(String[] args){
        Frame f = new Frame("Text Field");
        Panel p = new Panel();
        TextField tf1 = new TextField("Username", 12);
        TextField tf2 = new TextField("Password", 10);
        tf1.selectAll();
        tf2.selectAll();

        tf2.setEchoChar('*');

        p.add(tf1);
        p.add(tf2);
        f.add(p);
        f.setSize(300, 100);
        f.setVisible(true);
    }
}
