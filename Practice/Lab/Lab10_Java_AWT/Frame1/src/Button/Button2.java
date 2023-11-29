package Button;
import java.awt.*;

public class Button2 {
    public static void main(String[] args){
        Frame f = new Frame("button test");//Frame create
        Panel p = new Panel();//Panel create

        CheckboxGroup group = new CheckboxGroup();
        Checkbox radio1 = new Checkbox("A", group, true);
        Checkbox radio2 = new Checkbox("B", group, false);
        Checkbox radio3 = new Checkbox("C", group, false);

        p.add(radio1);
        p.add(radio2);
        p.add(radio3);

        f.add(p); // Attach panel at frame
        f.setSize(300, 100); //Frame size
        f.setVisible(true);//Frame create
    }
}
