package Label;
import java.awt.*;

public class Label1 {
    public static void main(String[] args){
        Frame f = new Frame();
        Panel p = new Panel();

        Label l1 = new Label();
        Label l2 = new Label("Input");
        Label l3 = new Label("Output");

        l1.setText("Sort");
        p.add(l1);
        p.add(l2);
        p.add(l3);
        f.add(p);
        f.setSize(300, 100);
        f.setVisible(true);//Frame create
    }
}
