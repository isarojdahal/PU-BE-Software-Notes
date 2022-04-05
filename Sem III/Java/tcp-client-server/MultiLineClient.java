import java.io.*;
import java.net.*;
import java.util.*;
public class  MultiLineClient {
    public static void main(String [] args) {
        try{
            Scanner s = new Scanner(System.in);
            Socket socket = new Socket("localhost",3500);
            DataOutputStream dout = new DataOutputStream(socket.getOutputStream());
            DataInputStream din = new DataInputStream(socket.getInputStream());
            boolean flag = true;
            while(flag){
            System.out.println("Please enter a msg");
            String msg  = s.nextLine();
            dout.writeUTF(msg);
            dout.flush();
            String reply = (String) din.readUTF();
            System.out.println("Server says : " + reply);
            if(msg.equals("bye")){
                flag = false;
            }
            }
                    dout.close();
            socket.close();
    
        }catch(Exception e){
            System.out.println("Session end");
        }
        
    }
}
