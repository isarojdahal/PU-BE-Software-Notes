import java.io.*;
import java.net.*;
import java.util.Scanner;


public class MultiLineChatServer {
    static Scanner scan = new Scanner(System.in);
    public static void main(String [] args) throws Exception{
        try{
            ServerSocket ss = new ServerSocket(3500);
        System.out.println("Server Running at 3500");
        DataInputStream din; 
        DataOutputStream dout;
        boolean flag = true;
        Socket s = ss.accept();
        System.out.println("Client Connected!!");
        din = new DataInputStream(s.getInputStream());
        dout= new DataOutputStream(s.getOutputStream());
        while(flag){
            

            String clientMsg = (String) din.readUTF();
            System.out.println("Client Says : " + clientMsg);
            if(clientMsg.equals("bye")){
                s.close();
                flag = false;
            
            }
            System.out.println("Type ur reply :");
            String msg = scan.nextLine();
            dout.writeUTF(msg);
            dout.flush();
        }
        dout.close();
        scan.close();
        ss.close();
        }catch(Exception e){
            System.out.println("Chat ends !");
        }
        
    }
}
