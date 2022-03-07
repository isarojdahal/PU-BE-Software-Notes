import java.awt.event.*;
import javax.swing.*;

class WindowOperation extends WindowAdapter {

    JFrame window;
    WindowOperation(){
         window = new JFrame("Window");
        window.setSize(400,400);

        window.addWindowListener(this);
        window.setVisible(true);
        window.setLocationRelativeTo(null);
    }

    public void windowClosing(WindowEvent e){
        int res = JOptionPane.showConfirmDialog(window,"Do you want to exit");
       if(res == JOptionPane.YES_OPTION){
           window.dispose();
       }
    }
    public static void main(String[] args){
        new WindowOperation();
    }

}