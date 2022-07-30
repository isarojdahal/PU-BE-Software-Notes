// Multiuser 


import java.io.*;
import java.net.*;


public class MultiUser {
    public static void main(String [] args) throws Exception{
        ServerSocket ss = new ServerSocket(4000);
        System.out.println("Waiting for Client at 4000");

        boolean flag = true;
        Socket s;
        while(flag){
             s = ss.accept();
            System.out.println("new client connected !!!");
            DataInputStream din = new DataInputStream(s.getInputStream());
            DataOutputStream dout = new DataOutputStream(s.getOutputStream());

            // read msg from client
            String msg = (String) din.readUTF();
            System.out.println("Client msg = " + msg);

            // send msg to the client
            dout.writeUTF("Thanks for ur msg");
            dout.flush();

            dout.close();
        }
        ss.close();
    }
}
