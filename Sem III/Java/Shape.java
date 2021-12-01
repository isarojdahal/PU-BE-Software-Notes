class Shape {

    int x, y, width, height; // instance variables.

    Shape(int x, int y, int width, int height) {

        this.width = width;
        this.height = height;

    }

    Shape(int width, int height) {
        this(0, 0, width, height); // calls the constructor
    }

    Shape() {
        this(0, 0, 1, 1);
    }

    public static void main(String[] args) {
        Shape shape1 = new Shape(1, 2, 200, 300);
        Shape shape2 = new Shape(100, 200);
        Shape shape3 = new Shape();
    }
}