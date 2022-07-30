import java.net.*;
import java.io.*;

class Client{

    public static void main() throws Exception{

        Socket socket = new Socket("localhost",9999);
        System.out.println("Connected to server...");

        DataInputStream dis = new DataInputStream(System.in);
        DataOutputStream dos = new DataOutputStream(socket.getOutputStream());

        String msg="";
        while(!msg.equals("stop_msg")){

            msg = dis.readLine();
            dos.write(msg);
        }
        socket.close();
        dis.close();
        dos.close();


    }
}