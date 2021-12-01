// Question no. 16

class PaymentSystem {

    void billAmount() {

        System.out.println("Amount billed");
    }

    void printReceipt() {
        System.out.println("Receipt printed");
    }
}

class DebitCardSystem extends PaymentSystem {

    String cardNumber;
    int cvvNumber;
    String bankName;

    DebitCardSystem(String cardNumber, int cvvNumber, String bankName) {
        this.cardNumber = cardNumber;
        this.cvvNumber = cvvNumber;
        this.bankName = bankName;

    }

}

class PaypalSystem extends PaymentSystem {

    String email;
    String password;

    PaypalSystem(String email, String password) {
        this.email = email;
        this.password = password;
    }
}

class MyPayment {
    public static void main(String[] args) {

        PaypalSystem paypal = new PaypalSystem("abc@gmail.com", "saroj123");
        paypal.printReceipt();
    }
}