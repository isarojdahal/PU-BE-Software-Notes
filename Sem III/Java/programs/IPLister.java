import java.net.*;
import java.util.*;

public class IPLister {

    // List all the IP of Network Interface 
 
    
    public static void main(String[] args)throws Exception {
        

        Enumeration<NetworkInterface> interfaces = NetworkInterface.getNetworkInterfaces();

        while (interfaces.hasMoreElements()) {
            
            NetworkInterface ni = interfaces.nextElement();
            
            Enumeration<InetAddress> ia = ni.getInetAddresses();

            while (ia.hasMoreElements()) {
                InetAddress i4 = ia.nextElement();
                System.out.println(i4.getHostAddress());

            }
        }

    }
}
