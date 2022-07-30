public class Pizza {

    final int STANDARD_PIZZA_PRICE = 100;
    final int DELUXE_PIZZA_PRICE = 200;
    final int TOPPING_PRICE = 20;

    static enum PizzaType {

        STANDARD, DELUXE;
    }

    PizzaType pizzaType;
    int noOfPizza;
    int amount = 0;
    int noOfToppings;

    Pizza(PizzaType pizzaType, int noOfPizza, int noOfToppings) {

        this.pizzaType = pizzaType;
        this.noOfPizza = noOfPizza;
        this.noOfToppings = noOfToppings;

        if (pizzaType == PizzaType.STANDARD)// topping is only available for deluxe pizza
            this.noOfToppings = 0;

    }

    private boolean validateOrder() {

        if (noOfToppings > 3) {
            System.out.println("Toppings can be added to 3 pizzas only");
            return false;
        } else if (noOfToppings >= 0 && noOfToppings <= 3) {
            return true;
        } else
            return false;
    }

    void makeBill() {

        if (validateOrder()) {

            switch (this.pizzaType) {
                case STANDARD:
                    amount = STANDARD_PIZZA_PRICE * noOfPizza;
                    break;

                case DELUXE:
                    amount = DELUXE_PIZZA_PRICE * noOfPizza + noOfToppings * TOPPING_PRICE;
                    break;
                default:
                    System.out.print("No of such pizza");
            }

            noOfPizza = noOfPizza / 5 + noOfPizza; // adds pizzas as per (buy 5 and get 1 free.)
            System.out.println("Total Price : " + amount + "\n Total No of Pizza : " + noOfPizza);

        }
    }

    public static void main(String[] args) {

        // Pizza order1 = new Pizza(PizzaType.STANDARD, 3, 0);
        // Pizza order1 = new Pizza(PizzaType.DELUXE, 6, 0);
        Pizza order1 = new Pizza(PizzaType.DELUXE, 6, 5);
        order1.makeBill();

    }

}
