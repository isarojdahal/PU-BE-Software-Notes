
//Question no. 13
import java.util.Scanner;

public class Variables {

    // class variables or static variables.
    static int age;

    // instance variables.
    String name;

    Variables(String name) {
        this.name = name;

    }

    String getName() {
        return name;
    }

    public static void main(String[] args) {

        // local variable.
        String name;

        Scanner scan = new Scanner(System.in);
        System.out.println("Enter you name : ");
        name = scan.nextLine();

        System.out.println("Enter your age : ");
        age = scan.nextInt();

        Variables obj = new Variables(name);
        System.out.println("Name : " + obj.getName());
        System.out.println("Age : " + age);

        scan.close();

    }

}
