

import java.lang.reflect.*;

class Example {
    
    public Example() {
        System.out.println("Example Constructor");
    }
}

public class MyReflection {
    

    public static void main(String[] args) {
        Example obj = new Example();
        
        Class c = obj.getClass();


        System.out.println(c.getName());
        // Constructor constructor = c.getConstructor();
        // Constructor constructor[] = c.getConstructors();
        // System.out.println(constructor.toString());

        // System.out.print(c.getDeclaredF);

    }
}