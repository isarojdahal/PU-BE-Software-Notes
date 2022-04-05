import java.net.*;
import java.io.*;

import java.util.*;
public class SimpleClient {

    static Scanner scan = new Scanner(System.in);
 public static void main(String [] args) throws Exception{
     Socket s = new Socket("localhost",4000);

     // for read write purpose
     DataInputStream din = new DataInputStream(s.getInputStream());
     DataOutputStream dout = new DataOutputStream(s.getOutputStream());
    System.out.println("Enter a msg for the server");
    String msg = scan.next();
    dout.writeUTF(msg);
    dout.flush();

    // read msg from the server
    String reply = (String) din.readUTF();
    System.out.println("** Server msg ** :" + reply);

    dout.close();
    scan.close();
    s.close();

 } 
}
