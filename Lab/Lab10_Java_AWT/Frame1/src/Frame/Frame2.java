package Frame;
import java.awt.*;

public class Frame2 extends Frame{
    public Frame2(){
        super("frame test");
        setSize(300, 300);
        setVisible(true);
    }
    public static void main(String[] args) {
        Frame2 fr = new Frame2();
    }
}
