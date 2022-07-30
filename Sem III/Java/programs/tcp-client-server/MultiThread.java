
// Multthreaded


import java.io.*;
import java.net.*;


public class MultiThread {
    public static void main(String [] args) throws Exception{
        ServerSocket ss = new ServerSocket(4000);


        boolean flag = true;
        while(flag){
            System.out.println("Waiting for Client at 4000");
            Socket s = ss.accept();
            System.out.println("new client connected !!!");

            MyThread t = new MyThread(s);
            t.start();
        }
        ss.close();
    }
}


class MyThread extends Thread{
    private Socket s;


    public MyThread(Socket s){
        this.s = s;
    }
 public void run(){
    try{
    DataInputStream din = new DataInputStream(this.s.getInputStream());
    DataOutputStream dout = new DataOutputStream(this.s.getOutputStream());

    // read msg from client
    String msg = (String) din.readUTF();
    System.out.println("Client msg = " + msg);

    // send msg to the client
    dout.writeUTF("Thanks for ur msg");
    dout.flush();

    dout.close();
    }catch(Exception e){

    }
    
 }
    
    
}