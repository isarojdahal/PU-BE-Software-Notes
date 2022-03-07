import java.util.Scanner;

class InvalidAgeException extends Exception{

    public InvalidAgeException(String msg){
        super(msg);
    }
}


public class CustomExecption{

   static void checkValidity(int age) throws InvalidAgeException{
        if(age<18){
            throw new InvalidAgeException("Age is invalid");
        }
        else System.out.print("Valid age");

    }

    public static void main(String[] args){

        Scanner scan = new Scanner(System.in);
        System.out.print("Enter your age : ");
        int age = scan.nextInt();
        try{
            checkValidity(age);
        }catch(InvalidAgeException e){
            System.out.print(e.getMessage());
        }

    }
}