import java.awt.*;
public class BorderLayoutEx {
    public static void main(String[] args){
        Frame f = new Frame("Border Layout");
        Panel panel = new Panel();
        panel.setBackground(Color.darkGray);
        panel.setSize(300, 300);
        BorderLayout layout = new BorderLayout();
        panel.setLayout(layout);

        panel.add(new Button("Center"), BorderLayout.CENTER);
        panel.add(new Button("East"), BorderLayout.EAST);
        panel.add(new Button("West"), BorderLayout.WEST);
        panel.add(new Button("North"), BorderLayout.NORTH);
        panel.add(new Button("South"), BorderLayout.SOUTH);

        f.add(panel);
        f.setSize(500, 300);
        f.setVisible(true);
    }
}
