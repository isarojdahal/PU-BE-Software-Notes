import java.util.Scanner;
import java.io.*;

public class WriteReadWithDataType{

    public static void main(String[] args) throws IOException{

        FileOutputStream fos = new FileOutputStream("person.txt");
        DataOutputStream dos = new DataOutputStream(fos);

        String name;
        int age;
        Scanner scan = new Scanner(System.in);

        System.out.println("Enter Name : ");
        name = scan.nextLine();

        System.out.println("Enter age : ");
        age = scan.nextInt();

        dos.writeUTF(name);
        dos.writeInt(age);

        dos.close();
        fos.close();
        scan.close();


        FileInputStream fis = new FileInputStream("person.txt");
        DataInputStream dis = new DataInputStream(fis);

        System.out.print("Name : "+dis.readUTF()+" age : "+dis.readInt());

    }
}