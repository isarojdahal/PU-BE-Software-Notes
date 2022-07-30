import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.net.*;
import java.util.Scanner;
import java.awt.image.BufferedImage;

public class Client {

    
    public static void main(String[] args) throws Exception {
        
        Socket socket = new Socket("localhost", 9989);

        DataInputStream dis = new DataInputStream(socket.getInputStream());
        DataOutputStream dos = new DataOutputStream(socket.getOutputStream());

        Scanner scan = new Scanner(System.in);
        System.out.println("Enter a number : ");
        int num = scan.nextInt();

        dos.writeInt(num);
        System.out.println("output from server : " + dis.readInt());
        
        scan.close();
        dos.close();
        dis.close();
        socket.close();

        
        
    }
}
