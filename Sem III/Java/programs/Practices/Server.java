import java.io.*;
import java.net.*;

class Server {

    public static void main(String[] args) throws Exception{

        ServerSocket serverSocket = new ServerSocket(9999);
        System.out.println("Waiting for client...");
        Socket s = serverSocket.accept();
        System.out.println("Client Accepted");

        BufferedReader br = new BufferedReader(new InputStreamReader(s.getInputStream()));

        System.out.println(br.readLine());

        s.close();
        
    }
}