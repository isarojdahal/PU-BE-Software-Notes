import java.awt.*;
import javax.swing.*;

public class MyBorderLayout {

    public static void main(String[] args) {
        JFrame frame = new JFrame("BorderLayout DEMO");
        frame.setLayout(new BorderLayout());

        JButton north = new JButton("North");

        JButton south = new JButton("South");

        JButton center = new JButton("Center");
        
        JButton east = new JButton("East");

        JButton west = new JButton("West");

        frame.add(north, BorderLayout.PAGE_START);
        frame.add(south, BorderLayout.PAGE_END);
        frame.add(east, BorderLayout.LINE_START);
        frame.add(west, BorderLayout.LINE_END);
        frame.add(center, BorderLayout.CENTER);

        frame.setSize(500, 500);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    }
}
