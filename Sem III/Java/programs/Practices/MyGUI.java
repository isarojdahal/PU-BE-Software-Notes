import javax.swing.*;
import java.awt.event.*;

class EventHandling implements ActionListener{

    MyGUI obj;
    EventHandling(MyGUI obj){
        this.obj = obj;
    }

    public void actionPerformed(ActionEvent e){
        this.obj.field1.setText("hmm");
    }


}

public class MyGUI{
 

    JLabel label1;
    JTextField field1;
    JButton button1;

    MyGUI(){

        JFrame window = new JFrame("Hello");
        window.setSize(500,500);
        window.setLocationRelativeTo(null);
        window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);


        label1 = new JLabel("First Number");
        label1.setBounds(50,50,40,40);
        window.add(label1);

        field1 = new JTextField(30);
        field1.setBounds(50, 150, 70,50);
        window.add(field1);


    
        button1 = new JButton("Click");
        button1.setBounds(50, 250, 40,40);
        button1.addActionListener(new EventHandling(this));
        window.add(button1);

        window.setVisible(true);

    }

    public static void main(String[] args){

      new MyGUI();

    }


}