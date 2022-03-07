import java.io.*;

public class Copy{

    public static void main(String[] args) throws IOException{

        FileInputStream fis = new FileInputStream("original.txt");
        FileOutputStream fos = new FileOutputStream("duplicate.txt");

        BufferedInputStream bis = new BufferedInputStream(fis);
        BufferedOutputStream bos = new BufferedOutputStream(fos);

        int content;
        while((content= bis.read())!=-1){
            bos.write(content);
        }

        System.out.println("File Copied.");
        bos.close();
        bis.close();
        fos.close();
        fis.close();

    }

}