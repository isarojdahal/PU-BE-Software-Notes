

// delegate event handling in separate class.

import java.awt.*;
import java.awt.event.*;


public class Main extends Frame {

    Button btn;
    TextField field;

    Main() {
        
        setSize(500, 500);
        setVisible(true);
        setLayout(new FlowLayout());

        btn = new Button("Click");
        field = new TextField(30);

        EventHandling ev = new EventHandling(this);
        btn.addActionListener(ev);

        add(btn);
        add(field);
    
    }


    public static void main(String[] args) {
        new Main();
    }
    
}

class EventHandling implements ActionListener {

    Main m;

    EventHandling(Main m) {
        this.m = m;
    }

    @Override
    public void actionPerformed(ActionEvent e) {

        if (e.getSource() == m.btn) {
            System.out.println("btn");
            m.field.setText("nice");
        }
 
        
    }
    

}