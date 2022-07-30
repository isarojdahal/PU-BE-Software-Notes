import java.awt.*;
import javax.swing.*;

class MyGraphics{

    MyGraphics(){

        JFrame window = new JFrame("My Graphics");
        window.setLocationRelativeTo(null);
        window.setSize(500,500);
        window.setVisible(true);

    }

    public void paint(Graphics g){
        g.setColor(Color.red);
        g.drawString("Hello",50,50);
        g.drawLine(80,80,120,120);
        g.setColor(Color.blue);
        g.fillRect(200,200,40,50);
        g.setColor(Color.green);
        g.drawOval(20,30,100,100);
    }

    public static void main(String[] args){
        new MyGraphics();
    }
}