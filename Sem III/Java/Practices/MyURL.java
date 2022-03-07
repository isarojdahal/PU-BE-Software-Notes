import java.net.*;
import java.io.*;

class MyURL {

    public static void main(String[] args) throws Exception{

        URL url = new URL("https://facebook.com");
        System.out.println(url.getHost()+" "+url.getFile()+" protocol : "+url.getProtocol());

        URLConnection con = url.openConnection();
        InputStream is = con.getInputStream();

        int content;

        while((content=is.read())!=-1){
            System.out.print((char)content);
        }
    }


}