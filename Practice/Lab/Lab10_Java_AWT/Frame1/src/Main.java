import java.awt.*;

public class Main {
    public static void main(String[] args) {
        Frame f= new Frame();
        f.setTitle("Layout Exercise"); //Title
        f.setSize(500, 320);//Size

        Panel textFieldsPanel = new Panel();
        TextField tf1 = new TextField("Input your text", 55); // 55 columns wide
        textFieldsPanel.add(tf1);

        Panel contentPanel = new Panel();
        TextArea ta = new TextArea("Text 1", 12, 55); // 12 rows, 55 columns
        contentPanel.add(ta);

        Panel buttonsPanel = new Panel();
        buttonsPanel.setLayout(new FlowLayout(FlowLayout.CENTER, 5, 0)); // horizontal gap of 5
        buttonsPanel.add(new Button("Add"));
        buttonsPanel.add(new Button("Edit"));
        buttonsPanel.add(new Button("Clear"));

        Panel mainPanel = new Panel();
        mainPanel.setLayout(new BorderLayout());
        mainPanel.add(textFieldsPanel, BorderLayout.NORTH);
        mainPanel.add(contentPanel, BorderLayout.CENTER);
        mainPanel.add(buttonsPanel, BorderLayout.SOUTH);

        f.add(mainPanel);
        f.setVisible(true);
    }
}