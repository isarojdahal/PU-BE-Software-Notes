// Question no. 14.
// Overiding toString method()

public class Overriding {

    String name, address;

    Overriding(String name, String address) {

        this.name = name;
        this.address = address;

    }

    // overriding toString method()
    public String toString() {

        return "Name : " + this.name + " Address : " + this.address;
    }

    public static void main(String[] args) {

        Overriding obj = new Overriding("ABC", "Kathmandu");
        // System.out.print(obj);
        // before overriding toString ; gives
        // Overriding@6f2b958e

        System.out.print(obj);
        // after orveriding toString; gives
        // Name: ABC Address :Kathmandu

    }

}
