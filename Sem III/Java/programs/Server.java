import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.net.*;

public class Server {

    
    public static void main(String[] args) throws Exception {

        ServerSocket ss = new ServerSocket(9989);

        System.out.println("Waiting for client to connect");
        Socket socket = ss.accept();
        System.out.println("Client connected");

        DataInputStream dis = new DataInputStream(socket.getInputStream());
        DataOutputStream dos = new DataOutputStream(socket.getOutputStream());

        int num = dis.readInt();
        System.out.println("Input from client : " + num);

        dos.writeInt(num * num);
        

        ss.close();
        socket.close();
        dis.close();
        dos.close();




        

    }
}
