//Question no. 11
class Shape {

    int x, y, width, height; // instance variables.

    Shape(int x, int y, int width, int height) {
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;

    }

    Shape(int width, int height) {
        this(0, 0, width, height); // calls the constructor
    }

    Shape() {
        this(0, 0, 1, 1);
    }

    // void printData() {

    // System.out.println("x : " + x + ", y : " + y + " width: " + width + " height
    // : " + height);
    // }

    public static void main(String[] args) {
        Shape shape1 = new Shape(1, 2, 200, 300);
        // shape1.printData();
        Shape shape2 = new Shape(100, 200);
        // shape2.printData();
        Shape shape3 = new Shape();
        // shape3.printData();
    }
}