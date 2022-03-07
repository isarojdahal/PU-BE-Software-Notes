import java.io.*;

class Student implements Serializable{

    String name;
    int age;

    Student(String name, int age){
        this.name = name;
        this.age = age;
    }

    public void display(){
        System.out.println("Name : "+this.name+" age : "+this.age);
    }

}

public class Serialization{

    public static void main(String[] args) throws IOException,ClassNotFoundException{

        // FileOutputStream fos = new FileOutputStream("serializable.txt");
        // ObjectOutputStream oos = new ObjectOutputStream(fos);

        // Student s = new Student("Saroj",12);
        // oos.writeObject(s);
        // oos.close();
        // fos.close();

        FileInputStream fis = new FileInputStream("serializable.txt");
        ObjectInputStream ois = new ObjectInputStream(fis);

        Student s =  (Student) ois.readObject();
        s.display();

        ois.close();
        fis.close();
    }
}