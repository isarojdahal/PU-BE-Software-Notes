import javax.swing.*;
import java.awt.event.*;

class MouseGUI extends MouseAdapter{

    JFrame f;
    JTextField field1,field2;
    MouseGUI(){

        JFrame window = new JFrame("Mouse GUI");

        window.setSize(500,500);
        window.setVisible(true);
        window.setLocationRelativeTo(null);

        field1 = new JTextField();
        field1.setBounds(50,100,70,30);
        field1.setEditable(false);

        field2= new JTextField();
        field2.setBounds(50,150,70,30);
        field2.setEditable(false);

        window.add(field1);window.add(field2);
        window.addMouseListener(this);
        window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public static void main(String[] args){
        new MouseGUI();
    }

    public void mouseEntered(MouseEvent e){
        field1.setText("Inside");
    }

    public void mouseExited(MouseEvent e){
        field1.setText("Outside");
    }

    public void mouseMoved(MouseEvent e){
        field2.setText("X : "+e.getX()+" Y : "+e.getY());
    }

}