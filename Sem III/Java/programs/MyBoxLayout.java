
import javax.swing.*;

public class MyBoxLayout {

    
    public static void main(String[] args) {

        JFrame frame = new JFrame("Box Layout");

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(500, 500);
        frame.setVisible(true);


        frame.setLayout(new BoxLayout(frame.getContentPane(), BoxLayout.Y_AXIS));
        JButton btn1 = new JButton("BTN1");
        frame.add(btn1);

        frame.add(new JButton("BTN@"));
    }
    
}
