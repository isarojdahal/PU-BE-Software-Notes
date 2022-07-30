//Question no. 15

class Image {
    String dimension;
    String imageType;
    boolean isColoured;

    Image(String dimension, String imageType, boolean isColoured) {
        this.dimension = dimension;
        this.imageType = imageType;
        this.isColoured = isColoured;
    }

}

public class Product {
    String name;
    int id;
    Image image; // has a Relationship

    Product(int id, String name, Image image) {
        this.id = id;
        this.name = name;
        this.image = image;
    }

    void printProductInfo() {

        System.out.println("Product ID : " + this.id + "\nName : " + this.name);
        System.out.println("Dimension : " + image.dimension + "\nImage Type:" + image.imageType + "\nisColoured: "
                + image.isColoured);
    }

    public static void main(String[] args) {
        Image img = new Image("120x120", "jpg", true);
        Product product = new Product(1, "Surf", img);
        product.printProductInfo();

    }

}
